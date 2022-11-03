#pragma once

#include <vector>
#include <Core/utils/byte_stream.h>
#include <Randomizer/ghosts/plugins.h>

namespace ghosts::plugins {
    class UpdateActiveAnimationsPlugin : public RandoGhostPlugin {
        std::vector<std::byte> record(app::GhostRecorder* recorder) override;
        void play(utils::ByteStream& stream, ghosts::RandoGhost& ghost) override;
    };
}