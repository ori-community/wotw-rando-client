#pragma once

#include <Modloader/modloader.h>

#include <filesystem>
#include <fstream>
#include <mutex>

namespace modloader {
    class ConsoleLoggingHandler final : public ILoggingHandler {
    public:
        explicit ConsoleLoggingHandler() {};

        void write(MessageType type, std::string const& group, std::string const& message) override;
    };
}
