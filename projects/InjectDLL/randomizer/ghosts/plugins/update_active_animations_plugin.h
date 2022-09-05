#pragma once

#include <vector>
#include <utils/byte_stream.h>
#include <ghosts/plugins.h>

namespace ghosts::plugins {
    class UpdateActiveAnimationsPlugin : public RandoGhostPlugin {
        std::vector<std::byte> record(app::GhostRecorder* recorder) override;
        void play(utils::ByteStream& stream, ghosts::RandoGhost& ghost) override;
    };
}