#pragma once

#include <string>
#include <filesystem>
#include <optional>

namespace randomizer::seed {
    enum class SourceStatus {
        Loading,
        Ready,
        Error,
    };

    class SeedSource {
    public:
        virtual ~SeedSource() = default;

        /** Poll the status of this seed source, and if it's ready, the seed content */
        virtual std::pair<SourceStatus, std::optional<std::string>> poll() = 0;

        /** The human description of this seed source */
        virtual std::string get_description() = 0;

        /** Convert this seed source to a source string. This must be the inverse of parse_source_string */
        virtual std::string to_source_string() = 0;

        /** Whether this seed source requires the game to connect to the server */
        virtual bool requires_server_connection() = 0;

        std::optional<std::string> get_error() { return m_error; }

    protected:
        std::optional<std::string> m_error;
    };

    class FileSeedSource: public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::string>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        bool requires_server_connection() override;

        explicit FileSeedSource(const std::filesystem::path& path);

    private:
        std::filesystem::path m_path;
        std::optional<std::string> m_content;
    };

    class DebugDelayedFileSeedSource: public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::string>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        bool requires_server_connection() override;

        explicit DebugDelayedFileSeedSource(const std::filesystem::path& path);

    private:
        bool loaded = false;
        std::filesystem::path m_path;
        std::optional<std::string> m_content;
    };

    class ServerSeedSource: public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::string>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        bool requires_server_connection() override;
    };

    class EmptySeedSource: public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::string>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        bool requires_server_connection() override;
    };

    class InvalidSeedSource: public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::string>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        bool requires_server_connection() override;

        explicit InvalidSeedSource(const std::string& source_string) : m_source_string(source_string) {};

    private:
        std::string m_source_string;
    };

    void set_server_seed_content(const std::optional<std::string>& content);
    std::shared_ptr<SeedSource> parse_source_string(const std::string& source);
}
