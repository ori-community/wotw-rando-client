#include <ext.h>
#include <csv.h>

#include <assert.h>
#include <fstream>
#include <iostream>
#include <sstream>

namespace csv {
    namespace {
        void str_replace(std::string& str, std::string const& to_replace, std::string const& replacement) {
            size_t index = 0;
            while (true) {
                index = str.find(to_replace, index);
                if (index == std::string::npos)
                    break;

                str.replace(index, to_replace.size(), replacement);
                index += replacement.size();
            }
        }
    } // namespace

    bool csv_load_file(CSV& csv) {
        std::ifstream st(csv.path);
        std::noskipws(st);
        csv.headers.clear();
        csv.data.clear();

        bool parsing_headers = true;
        char c;
        std::string line;
        while (std::getline(st, line)) {
            trim(line);
            if (line.empty())
                continue;

            std::stringstream ss(line);
            bool encode = false;
            bool last_unescaped_quote = false;
            char c = 0;
            std::string token;

            do {
                c = ss.get();
            } while (c == ' ');
            if (c == '"') {
                encode = true;
                c = ss.get();
            }

            while (!ss.eof()) {
                if (c == '\n' || c == '\r') {
                    c = ss.get();
                    continue;
                }

                if (!encode) {
                    if (c == ',') // End word
                    {
                        trim(token);
                        if (parsing_headers)
                            csv.headers.push_back(token);
                        else
                            csv.data.push_back(token);

                        token.clear();
                        do {
                            c = ss.get();
                        } while (c == ' ');
                        if (c == '"') {
                            encode = true;
                            c = ss.get();
                        }

                        continue;
                    } else
                        token += c;
                } else {
                    if (c == '"') {
                        last_unescaped_quote = !last_unescaped_quote;
                        if (!last_unescaped_quote)
                            token += c;
                    } else if (last_unescaped_quote && c == ',') // End word
                    {
                        trim(token);
                        if (parsing_headers)
                            csv.headers.push_back(token);
                        else
                            csv.data.push_back(token);

                        token.clear();
                        do {
                            c = ss.get();
                        } while (c == ' ');
                        if (c == '"') {
                            encode = true;
                            c = ss.get();
                        }

                        continue;
                    } else if (last_unescaped_quote) // Malformed csv.
                        return false;
                    else
                        token += c;
                }

                c = ss.get();
            }

            parsing_headers = false;
        }

        return true;
    }

    std::string sanitize_csv_field(std::string str) {
        if (str.find(',') == -1 && str.find('"') == -1)
            return str;

        str_replace(str, "\"", "\"\"");
        return fmt::format("\"{}\"", str);
    }

    void csv_save_file(CSV& csv) {
        std::ofstream st(csv.path);
        for (auto const& header : csv.headers) {
            st << sanitize_csv_field(header);
            st << ",";
        }

        int i = 0;
        for (auto const& entry : csv.data) {
            if (i % csv.headers.size() == 0)
                st << "\n";

            st << sanitize_csv_field(entry);
            st << ",";
            ++i;
        }
    }

    void csv_parse_data(CSV& csv, std::vector<std::string> const& data, int header_count) {
        assert(data.size() % header_count == 0);
        // TODO: Add double quote marks around strings that include commas.
        // Replace existing double quotes with single quotes.

        csv.headers.insert(csv.headers.begin(), data.begin(), data.begin() + header_count);
        if (data.size() > header_count)
            csv.data.insert(csv.data.begin(), data.begin() + header_count + 1, data.end());
    }

    std::vector<std::vector<std::string>> csv_retrieve_data(CSV& csv) {
        assert(csv.data.size() % csv.headers.size() == 0);

        std::vector<std::vector<std::string>> data;
        data.push_back(csv.headers);
        auto it = csv.data.begin();
        while (it != csv.data.end()) {
            auto end = it + csv.headers.size();
            std::vector next(it, end);
            data.push_back(next);
            it = end;
        }

        return data;
    }
} // namespace csv
