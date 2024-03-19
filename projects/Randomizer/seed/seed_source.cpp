#include <Core/events/task.h>
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

        if (source == "server") {
            return std::make_shared<ServerSeedSource>();
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
    std::string ServerSeedSource::to_source_string() { return "server"; }
    bool ServerSeedSource::requires_server_connection() { return true; }

    std::pair<SourceStatus, std::optional<std::string>> EmptySeedSource::poll() {
        return {SourceStatus::Ready, ""};
    }
    std::string EmptySeedSource::get_description() { return "No Seed Loaded"; }
    std::string EmptySeedSource::to_source_string() { return "empty"; }
    bool EmptySeedSource::requires_server_connection() {
        return false;
    }

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
    std::string FileSeedSource::get_description() { return std::format("File {}", m_path.filename().string()); }
    std::string FileSeedSource::to_source_string() {
        return std::format("file:{}", m_path.string());
    }
    bool FileSeedSource::requires_server_connection() { return false; }

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
    bool DebugDelayedFileSeedSource::requires_server_connection() { return false; }

    std::pair<SourceStatus, std::optional<std::string>> InvalidSeedSource::poll() {
        return {SourceStatus::Error, std::nullopt};
    }
    std::string InvalidSeedSource::get_description() { return std::format("Invalid source: {}", m_source_string); }
    std::string InvalidSeedSource::to_source_string() { return "invalid"; }
    bool InvalidSeedSource::requires_server_connection() {
        return false;
    }
} // namespace randomizer::seed
