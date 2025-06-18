#include <Core/events/task.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/seed_source.h>
#include <fstream>
#include <memory>

namespace randomizer::seed {
    std::optional<std::shared_ptr<SeedArchive>> server_seed_archive;

    std::shared_ptr<SeedSource> parse_source_string(const std::string& source) {
        if (source.starts_with("file:")) {
            return std::make_shared<FileSeedSource>(convert_string_to_wstring(source.substr(5)));
        }

        if (source.starts_with("server:")) {
            const auto multiverse_id_string = source.substr(7);

            try {
                const auto multiverse_id = std::stol(multiverse_id_string);
                return std::make_shared<ServerSeedSource>(multiverse_id);
            } catch (const std::invalid_argument&) {
                modloader::error("seed_source", std::format("Parsing multiverse ID '{}' failed", multiverse_id_string));
            }
        }

        if (source.starts_with("archipelago:")) {
            const auto options_string = source.substr(12);
            std::vector<std::string> options;
            split_str(options_string, options, '|');

            if (options.size() < 3) {
                modloader::error("seed_source", "Archipelago seed sources need to give 4 options: url|slot_name|password");
            } else {
                // TODO: Pipes are not supported as passwords for now since they are almost never used according to Archipelago
                return std::make_shared<ArchipelagoSeedSource>(
                    options.at(0),
                    options.at(1),
                    options.at(2)
                );
            }
        }

        return std::make_shared<InvalidSeedSource>(source);
    }

    void set_server_seed_archive(const std::optional<std::shared_ptr<SeedArchive>>& content) { server_seed_archive = content; }

    std::pair<SourceStatus, std::optional<std::shared_ptr<SeedArchive>>> ServerSeedSource::poll() {
        return server_seed_archive.has_value()
            ? std::make_pair(SourceStatus::Ready, server_seed_archive)
            : std::make_pair(SourceStatus::Loading, std::nullopt);
    }
    std::string ServerSeedSource::get_description() { return "Server Seed"; }
    std::string ServerSeedSource::to_source_string() { return std::format("server:{}", m_multiverse_id); }
    std::optional<server_connection_t> ServerSeedSource::get_server_connection() { return RandoServerConnection(m_multiverse_id); }
    bool ServerSeedSource::allows_rereading() { return false; }

    std::pair<SourceStatus, std::optional<std::string>> ArchipelagoSeedSource::poll() {
        return archipelago_client().current_seed_generator().has_value()
            ? std::make_pair(SourceStatus::Ready, std::make_optional(archipelago_client().current_seed_generator()->get_seed_file()))
            : std::make_pair(SourceStatus::Loading, std::nullopt);
    }
    std::string ArchipelagoSeedSource::get_description() { return std::format("AP:\n  URL: {}\n  Player: {}", m_url, m_slot_name); }
    std::string ArchipelagoSeedSource::to_source_string() { return std::format("archipelago:{}|{}|{}", m_url, m_slot_name, m_password); }
    std::optional<server_connection_t> ArchipelagoSeedSource::get_server_connection() {
        return ArchipelagoServerConnection(m_url, m_slot_name, m_password);
    }
    bool ArchipelagoSeedSource::allows_rereading() {
        return false;
    }

    FileSeedSource::FileSeedSource(const std::filesystem::path& path) {
        m_path = path;

        std::basic_ifstream<std::byte> seed_file(path, std::ios::binary);
        seed_file.unsetf(std::ios::skipws);

        if (seed_file.is_open()) {
            try {
                m_archive = std::make_shared<SeedArchive>(
                    std::vector(std::istreambuf_iterator{seed_file}, {})
                );
            } catch (const std::runtime_error& e) {
                m_error = std::format("{}: {}", e.what(), convert_wstring_to_string(m_path.filename().wstring()));
            }
        } else {
            m_error = std::format("File not found: {}", convert_wstring_to_string(m_path.filename().wstring()));
        }
    }
    std::pair<SourceStatus, std::optional<std::shared_ptr<SeedArchive>>> FileSeedSource::poll() {
        return m_archive.has_value()
            ? std::make_pair(SourceStatus::Ready, m_archive)
            : std::make_pair(SourceStatus::Error, std::nullopt);
    }
    std::string FileSeedSource::get_description() { return std::format("{}", convert_wstring_to_string(m_path.filename().wstring())); }
    std::string FileSeedSource::to_source_string() {
        return std::format("file:{}", convert_wstring_to_string(m_path.wstring()));
    }
    std::optional<server_connection_t> FileSeedSource::get_server_connection() { return std::nullopt; }
    bool FileSeedSource::allows_rereading() { return true; }


    std::pair<SourceStatus, std::optional<std::shared_ptr<SeedArchive>>> InvalidSeedSource::poll() {
        return {SourceStatus::Error, std::nullopt};
    }
    std::string InvalidSeedSource::get_description() { return std::format("Invalid source: {}", m_source_string); }
    std::string InvalidSeedSource::to_source_string() { return "invalid"; }
    std::optional<server_connection_t> InvalidSeedSource::get_server_connection() { return std::nullopt; }
    bool InvalidSeedSource::allows_rereading() { return false; }
} // namespace randomizer::seed
