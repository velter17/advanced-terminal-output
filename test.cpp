#include "advanced_terminal_output/table.hpp"

using namespace AdvancedTerm;

int main()
{
    using color = termcolor::bold_color<termcolor::Magenta>;

    auto header = createRow("num", createCell<EAlign::Right, 2>(createData<color>("Info")));
    auto data = createTable(
            createRow(1, "terminal", "table"),
            createRow(2, "written by", createData<termcolor::bold_color<termcolor::Green>>("Dmytro\nSadovyi")),
            createRow(createCell<EAlign::Center, 3>(createData<termcolor::color<termcolor::Cyan>>("2018")))
            );
    auto table = createTable(header, data);

    std::cout << getTableStr(table);

    return 0;
}
