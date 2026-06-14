#include <Modloader/app/structs/TextureFormat__Enum.h>
#include <Modloader/app/methods/UnityEngine/Texture2D.h>
#include <Modloader/app/methods/UnityEngine/Texture.h>
#include <Modloader/app/types/Texture2D.h>
#include <Modloader/modloader.h>
#include <Randomizer/seed/archive.h>
#include <nlohmann/json.hpp>
#include <Core/utils/stb_image.h>

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

    app::Texture2D* SeedArchive::get_asset_texture(const std::string& path) {
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
            return nullptr;
        }

        const auto data = archive_entry.readAsBinary();
        const auto data_length = archive_entry.getSize();

        int width;
        int height;
        int channel_count = 4;
        stbi_set_flip_vertically_on_load(true);

        unsigned char* png_data = stbi_load_from_memory(static_cast<stbi_uc const*>(data), static_cast<int>(data_length), &width, &height, &channel_count, STBI_rgb_alpha);

        delete[] static_cast<char*>(data);

        if (png_data == nullptr) {
            modloader::warn("seed_archive", std::format("failed to load asset texture {} ({}).", path, stbi_failure_reason()));
            return nullptr;
        }

        const auto texture_ptr = types::Texture2D::create();

        const auto format = channel_count == 3 ? app::TextureFormat__Enum::RGB24 : app::TextureFormat__Enum::RGBA32;
        UnityEngine::Texture2D::ctor_4(texture_ptr, width, height, format, false, false);
        UnityEngine::Texture2D::LoadRawTextureData_1(texture_ptr, png_data, width * height * channel_count);
        UnityEngine::Texture2D::Apply_1(texture_ptr, true, false);
        UnityEngine::Texture::set_wrapMode(reinterpret_cast<app::Texture*>(texture_ptr), app::TextureWrapMode__Enum::Clamp);
        stbi_image_free(png_data);

        asset_texture_cache.emplace(path, texture_ptr);

        return texture_ptr;
    }
} // namespace randomizer::seed
