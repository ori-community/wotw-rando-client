#pragma once

#include <string>
#include <vector>

struct CSV {
    std::string path;
    std::vector<std::string> headers;
    std::vector<std::string> data;
};

namespace csv {
    bool csv_load_file(CSV& csv);
    void csv_save_file(CSV& csv);

    std::string sanitize_csv_field(std::string str);
    void csv_parse_data(CSV& csv, std::vector<std::string> const& data, int header_count);
    std::vector<std::vector<std::string>> csv_retrieve_data(CSV& csv);
} // namespace csv
