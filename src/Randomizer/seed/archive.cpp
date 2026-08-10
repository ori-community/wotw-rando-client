#include <Modloader/app/structs/TextureFormat__Enum.h>
#include <Modloader/app/methods/UnityEngine/Texture2D.h>
#include <Modloader/app/methods/UnityEngine/Texture.h>
#include <Modloader/app/methods/UnityEngine/ImageConversion.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/Texture2D.h>
#include <Modloader/app/types/Byte.h>
#include <Modloader/modloader.h>
#include <Randomizer/seed/archive.h>
#include <nlohmann/json.hpp>

namespace randomizer::seed {
    using namespace app::classes;

    SeedArchive::SeedArchive(const std::vector<std::byte>& data) :
        m_archive_data(data),
        m_archive(libzippp::ZipArchive::fromBuffer(m_archive_data.data(), m_archive_data.size())) {
        if (m_archive == nullptr) {
            throw std::runtime_error("Failed to open seed archive");
        }
    }

    SeedArchive::~SeedArchive() { libzippp::ZipArchive::free(m_archive); }

    std::optional<std::string> SeedArchive::read_text_file_from_archive(const std::string& file_name) const {
        m_archive->open();

        if (!m_archive->isOpen()) {
            throw std::runtime_error("Failed to open seed archive");
        }

        const auto entry = m_archive->getEntry(file_name);

        if (entry.isNull()) {
            return std::nullopt;
        }

        return entry.readAsText();
    }

    nlohmann::json SeedArchive::read_json_file_from_archive(const std::string& file_name) const {
        const auto text = read_text_file_from_archive(file_name);

        if (!text.has_value()) {
            return nlohmann::json(nullptr);
        }

        return nlohmann::json::parse(*text);
    }

    nlohmann::json SeedArchive::get_assembly() const {
        return read_json_file_from_archive("assembly.json");
    }

    nlohmann::json SeedArchive::get_seedgen_info() const {
        return read_json_file_from_archive("seedgen_info.json");
    }

    nlohmann::json SeedArchive::get_preload() const {
        return read_json_file_from_archive("preload.json");
    }

    std::string SeedArchive::get_format_version() const {
        const auto format_version = read_text_file_from_archive("format_version.txt");

        if (!format_version.has_value()) {
            throw std::runtime_error("Failed to read version from seed archive. Does format_version.txt exist?");
        }

        return *format_version;
    }

    const std::vector<std::byte>& SeedArchive::get_archive_data() const { return m_archive_data; }

    std::optional<app::Texture2D*> SeedArchive::get_asset_texture(const std::string& path) {
        const auto cached_texture = asset_texture_cache.find(path);
        if (cached_texture != asset_texture_cache.end()) {
            return cached_texture->second.ref();
        }

        m_archive->open();

        if (!m_archive->isOpen()) {
            throw std::runtime_error("Failed to open seed archive");
        }

        const auto archive_entry = m_archive->getEntry(std::format("assets/{}", path));

        if (archive_entry.isNull() || !archive_entry.isFile()) {
            modloader::error("seed_archive", std::format("tried to load asset texture at {} but it was not a file", path));
            return std::nullopt;
        }

        const auto data = archive_entry.readAsBinary();
        const auto data_length = archive_entry.getSize();

        const auto bytes_array = types::Byte::create_array(data_length);
        for (int i = 0; i < data_length; ++i) {
            bytes_array->vector[i] = static_cast<uint8_t*>(data)[i];
        }

        const auto texture = types::Texture2D::create();
        UnityEngine::Texture2D::ctor_4(texture, 1, 1, app::TextureFormat__Enum::RGBA32, true, false);
        UnityEngine::ImageConversion::LoadImage_1(texture, bytes_array, true);
        UnityEngine::Texture::set_wrapMode(reinterpret_cast<app::Texture*>(texture), app::TextureWrapMode__Enum::Clamp);
        UnityEngine::Object::set_hideFlags(reinterpret_cast<app::Object_1*>(texture), app::HideFlags__Enum::DontUnloadUnusedAsset);

        asset_texture_cache.emplace(path, texture);

        return texture;
    }
} // namespace randomizer::seed
