#include <Randomizer/seed/archive.h>
#include <nlohmann/json.hpp>

namespace randomizer::seed {
    SeedArchive::SeedArchive(const std::vector<std::byte>& data) :
        m_archive_data(data),
        m_archive(libzippp::ZipArchive::fromBuffer(m_archive_data.data(), m_archive_data.size())) {}

    SeedArchive::~SeedArchive() { libzippp::ZipArchive::free(m_archive); }

    std::string SeedArchive::read_text_file_from_archive(const std::string& file_name) const {
        m_archive->open();

        if (!m_archive->isOpen()) {
            throw std::runtime_error("Failed to open seed archive");
        }

        const auto entry = m_archive->getEntry(file_name);

        if (entry.isNull()) {
            throw std::runtime_error(std::format("Seed archive did not contain {}", file_name));
        }

        return entry.readAsText();
    }

    nlohmann::json SeedArchive::read_json_file_from_archive(const std::string& file_name) const {
        return nlohmann::json::parse(read_text_file_from_archive(file_name));
    }

    nlohmann::json SeedArchive::get_assembly() const {
        return read_json_file_from_archive("assembly.json");
    }

    nlohmann::json SeedArchive::get_preload() const {
        return read_json_file_from_archive("preload.json");
    }

    std::string SeedArchive::get_format_version() const {
        return read_text_file_from_archive("format_version.txt");
    }

    const std::vector<std::byte>& SeedArchive::get_archive_data() const {
        return m_archive_data;
    }
} // namespace randomizer::seed
