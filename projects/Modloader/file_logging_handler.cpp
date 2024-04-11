#include <Common/csv.h>
#include <Modloader/file_logging_handler.h>

namespace modloader {
    FileLoggingHandler::FileLoggingHandler(const std::filesystem::path& path) :
        m_stream(path) {
    }

    void FileLoggingHandler::write(MessageType type, std::string const& group, std::string const& message) {
        std::string sanitized_group = csv::sanitize_csv_field(group);
        std::string sanitized_message = csv::sanitize_csv_field(message);

        const std::string line = std::format(
            "{}, [{}], {},",
            static_cast<int>(type),
            sanitized_group,
            sanitized_message
        );

        std::lock_guard guard(m_mutex);
        m_stream << line << std::endl;
        m_stream.flush();
    }
}
