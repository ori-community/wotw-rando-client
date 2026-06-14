#pragma once

#include <Modloader/modloader.h>

#include <filesystem>
#include <fstream>
#include <mutex>

namespace modloader {
    class ConsoleLoggingHandler final : public ILoggingHandler {
    public:
        explicit ConsoleLoggingHandler(const LogLevel max_log_level) :
            ILoggingHandler(max_log_level) {}

    protected:
        void write_internal(LogLevel type, std::string const& group, std::string const& message) override;
    };
}
