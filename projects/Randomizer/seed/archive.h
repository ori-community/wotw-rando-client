#pragma once

#include <libzippp.h>
#include <nlohmann/json.hpp>

namespace randomizer::seed {
  class SeedArchive {
  public:
    explicit SeedArchive(const std::vector<std::byte>& data);
    explicit SeedArchive(const std::vector<char>& data);
    ~SeedArchive();

    nlohmann::json get_assembly() const;
    nlohmann::json get_preload() const;
    std::string get_format_version() const;

    const std::vector<std::byte>& get_archive_data() const;

private:
    std::string read_text_file_from_archive(const std::string& file_name) const;
    nlohmann::json read_json_file_from_archive(const std::string& file_name) const;

    std::vector<std::byte> m_archive_data;
    libzippp::ZipArchive* m_archive;
  };
}
