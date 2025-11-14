#include <Common/csv.h>
#include <Modloader/file_logging_handler.h>

namespace modloader {
    FileLoggingHandler::FileLoggingHandler(const std::filesystem::path& path, const LogLevel max_log_level) :
        ILoggingHandler(max_log_level), m_stream(path) {
    }

    std::string get_message_type_string(LogLevel type) {
        switch (type) {
            case LogLevel::Error:
                return "ERROR";
            case LogLevel::Warning:
                return "WARNING";
            case LogLevel::Info:
                return "INFO";
            case LogLevel::Debug:
                return "DEBUG";
        }

        return "UNKNOWN";
    }

    void FileLoggingHandler::write_internal(LogLevel type, std::string const& group, std::string const& message) {
        std::string sanitized_group = csv::sanitize_csv_field(group);
        std::string sanitized_message = csv::sanitize_csv_field(message);

        const std::string line = std::format(
            "{}, {}, {}, {},",
            std::format("{0:%Y}-{0:%m}-{0:%d} {0:%H}:{0:%M}:{0:%S}", std::chrono::system_clock::now()),
            get_message_type_string(type),
            sanitized_group,
            sanitized_message
        );

        std::lock_guard guard(m_mutex);
        m_stream << line << std::endl;
        m_stream.flush();
    }
}
