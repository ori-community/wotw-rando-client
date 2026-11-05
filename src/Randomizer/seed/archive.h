#pragma once

#include <Modloader/il2cpp_helpers.h>
#include <Modloader/app/structs/Texture2D.h>
#include <libzippp.h>
#include <nlohmann/json.hpp>

namespace randomizer::seed {
  class SeedArchive {
  public:
    explicit SeedArchive(const std::vector<std::byte>& data);
    ~SeedArchive();

    std::optional<nlohmann::json> get_assembly() const;
    std::optional<nlohmann::json> get_seedgen_info() const;
    std::optional<nlohmann::json> get_preload() const;
    std::string get_format_version() const;

    const std::vector<std::byte>& get_archive_data() const;

    std::optional<app::Texture2D*> get_asset_texture(const std::string& path);

private:
    std::optional<std::string> read_text_file_from_archive(const std::string& file_name) const;
    std::optional<nlohmann::json> read_json_file_from_archive(const std::string& file_name) const;

    std::vector<std::byte> m_archive_data;
    libzippp::ZipArchive* m_archive;

    std::unordered_map<std::string, il2cpp::GCRef<app::Texture2D>> asset_texture_cache;
  };
}
