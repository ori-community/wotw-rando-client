#include <Core/events/task.h>
#include <Modloader/modloader.h>
#include <Randomizer/seed/seed_source.h>
#include <fstream>
#include <memory>

namespace randomizer::seed {
    std::optional<std::string> server_seed_content;

    std::shared_ptr<SeedSource> parse_source_string(const std::string& source) {
        if (source.starts_with("file:")) {
            return std::make_shared<FileSeedSource>(source.substr(5));
        }

        if (source.starts_with("delayed-file:")) {
            return std::make_shared<DebugDelayedFileSeedSource>(source.substr(13));
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

        if (source == "empty") {
            return std::make_shared<EmptySeedSource>();
        }

        return std::make_shared<InvalidSeedSource>(source);
    }

    void set_server_seed_content(const std::optional<std::string>& content) { server_seed_content = content; }

    std::pair<SourceStatus, std::optional<std::string>> ServerSeedSource::poll() {
        return server_seed_content.has_value()
            ? std::make_pair(SourceStatus::Ready, server_seed_content)
            : std::make_pair(SourceStatus::Loading, std::nullopt);
    }
    std::string ServerSeedSource::get_description() { return "Server Seed"; }
    std::string ServerSeedSource::to_source_string() { return std::format("server:{}", m_multiverse_id); }
    std::optional<long> ServerSeedSource::get_multiverse_id() { return m_multiverse_id; }
    bool ServerSeedSource::allows_rereading() { return false; }

    std::pair<SourceStatus, std::optional<std::string>> EmptySeedSource::poll() {
        return {SourceStatus::Ready, "// Format Version: 1.0.0"};
    }
    std::string EmptySeedSource::get_description() { return "Empty Seed"; }
    std::string EmptySeedSource::to_source_string() { return "empty"; }
    std::optional<long> EmptySeedSource::get_multiverse_id() { return std::nullopt; }
    bool EmptySeedSource::allows_rereading() { return false; }

    FileSeedSource::FileSeedSource(const std::filesystem::path& path) {
        m_path = path;

        const std::ifstream seed_file(path);

        if (seed_file.is_open()) {
            std::stringstream seed_buffer;
            seed_buffer << seed_file.rdbuf();
            const auto seed_content = seed_buffer.str();

            m_content = seed_content;
        } else {
            m_error = std::format("File not found: {}", path.string());
        }
    }
    std::pair<SourceStatus, std::optional<std::string>> FileSeedSource::poll() {
        return m_content.has_value()
            ? std::make_pair(SourceStatus::Ready, m_content)
            : std::make_pair(SourceStatus::Error, std::nullopt);
    }
    std::string FileSeedSource::get_description() { return std::format("{}", m_path.filename().string()); }
    std::string FileSeedSource::to_source_string() {
        return std::format("file:{}", m_path.string());
    }
    std::optional<long> FileSeedSource::get_multiverse_id() { return std::nullopt; }
    bool FileSeedSource::allows_rereading() { return true; }

    DebugDelayedFileSeedSource::DebugDelayedFileSeedSource(const std::filesystem::path& path) {
        m_path = path;

        core::events::schedule_task(5.f, [&, path] {
            loaded = true;
            const std::ifstream seed_file(path);

            if (seed_file.is_open()) {
                std::stringstream seed_buffer;
                seed_buffer << seed_file.rdbuf();
                const auto seed_content = seed_buffer.str();

                m_content = seed_content;
            } else {
                m_error = std::format("File not found: {}", path.string());
            }
        });
    }
    std::pair<SourceStatus, std::optional<std::string>> DebugDelayedFileSeedSource::poll() {
        if (!loaded) {
            return {SourceStatus::Loading, std::nullopt};
        }

        return m_content.has_value()
            ? std::make_pair(SourceStatus::Ready, m_content)
            : std::make_pair(SourceStatus::Error, std::nullopt);
    }
    std::string DebugDelayedFileSeedSource::get_description() { return std::format("File (DEBUG 5s delay) {}", m_path.filename().string()); }
    std::string DebugDelayedFileSeedSource::to_source_string() { return std::format("delayed-file:{}", m_path.string()); }
    std::optional<long> DebugDelayedFileSeedSource::get_multiverse_id() { return std::nullopt; }
    bool DebugDelayedFileSeedSource::allows_rereading() { return true; }

    std::pair<SourceStatus, std::optional<std::string>> InvalidSeedSource::poll() {
        return {SourceStatus::Error, std::nullopt};
    }
    std::string InvalidSeedSource::get_description() { return std::format("Invalid source: {}", m_source_string); }
    std::string InvalidSeedSource::to_source_string() { return "invalid"; }
    std::optional<long> InvalidSeedSource::get_multiverse_id() { return std::nullopt; }
    bool InvalidSeedSource::allows_rereading() { return false; }
} // namespace randomizer::seed
