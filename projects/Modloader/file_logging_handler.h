#pragma once

#include <Modloader/modloader.h>

#include <filesystem>
#include <fstream>
#include <mutex>

namespace modloader {
    class FileLoggingHandler final : public ILoggingHandler {
    public:
        explicit FileLoggingHandler(const std::filesystem::path& path);

        void write(MessageType type, std::string const& group, std::string const& message) override;

    private:
        std::mutex m_mutex;
        std::ofstream m_stream;
    };
}
