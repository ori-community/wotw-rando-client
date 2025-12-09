#pragma once

#include "archive.h"


#include <filesystem>
#include <optional>
#include <string>
#include <variant>

namespace randomizer::seed {
    enum class SourceStatus {
        Loading,
        Ready,
        Error,
    };

    struct RandoServerConnection {
        long multiverse_id;
    };

    using server_connection_t = std::variant<RandoServerConnection>;

    class SeedSource {
    public:
        virtual ~SeedSource() = default;

        /** Poll the status of this seed source, and if it's ready, the seed content */
        virtual std::pair<SourceStatus, std::optional<std::shared_ptr<SeedArchive>>> poll() = 0;

        /** The human description of this seed source */
        virtual std::string get_description() = 0;

        /** Convert this seed source to a source string. This must be the inverse of parse_source_string */
        virtual std::string to_source_string() = 0;

        /** The connection details if connecting to a server, or nullopt for offline play */
        virtual std::optional<server_connection_t> get_server_connection() = 0;

        /** Reread the seed source */
        virtual bool allows_rereading() = 0;

        /** Query custom properties for seed sources */
        std::optional<std::variant<std::string, int, float>> get_property(int property) { return std::nullopt; }

        std::optional<std::string> get_error() { return m_error; }

    protected:
        std::optional<std::string> m_error;
    };

    class FileSeedSource : public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::shared_ptr<SeedArchive>>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        std::optional<server_connection_t> get_server_connection() override;
        bool allows_rereading() override;

        explicit FileSeedSource(const std::filesystem::path& path);

    private:
        std::filesystem::path m_path;
        std::optional<std::shared_ptr<SeedArchive>> m_archive;
    };

    class ServerSeedSource : public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::shared_ptr<SeedArchive>>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        std::optional<server_connection_t> get_server_connection() override;
        bool allows_rereading() override;

        explicit ServerSeedSource(long multiverse_id) :
            m_multiverse_id(multiverse_id) {};

    private:
        long m_multiverse_id;
    };

    class InvalidSeedSource: public SeedSource {
    public:
        std::pair<SourceStatus, std::optional<std::shared_ptr<SeedArchive>>> poll() override;
        std::string get_description() override;
        std::string to_source_string() override;
        std::optional<server_connection_t> get_server_connection() override;
        bool allows_rereading() override;

        explicit InvalidSeedSource(const std::string& source_string) :
            m_source_string(source_string) {
            m_error = std::format("Invalid source: {}", source_string);
        };

    private:
        std::string m_source_string;
    };

    void set_server_seed_archive(const std::optional<std::shared_ptr<SeedArchive>>& content);
    std::shared_ptr<SeedSource> parse_source_string(const std::string& source);
} // namespace randomizer::seed
