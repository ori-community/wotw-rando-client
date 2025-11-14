#include <Modloader/console_logging_handler.h>

#include "windows_api/console.h"

namespace modloader {
    std::string get_message_type_prefix(LogLevel type) {
        switch (type) {
            case LogLevel::Error:
                return "\033[91mERROR\033[0m";
            case LogLevel::Warning:
                return "\033[93mWARN \033[0m";
            case LogLevel::Info:
                return "\033[92mINFO \033[0m";
            case LogLevel::Debug:
                return "\033[97mDEBUG\033[0m";
        }

        return "UNKWN";
    }

    void ConsoleLoggingHandler::write_internal(LogLevel type, std::string const& group, std::string const& message) {
        modloader::win::console::console_send(
            std::format("{} \033[95m{}\033[0m: {}", get_message_type_prefix(type), group, message)
        );
    }
}
