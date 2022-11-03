#pragma once

#include <Randomizer/ghosts.h>
#include <Core/utils/byte_stream.h>
#include <vector>

namespace ghosts::plugins {
    // These all have to be higher than app::GhostFrame_FrameDataTypes__Enum
    enum class RandoGhostFrameDataType: char {
        UpdateActiveAnimations = 20,
    };

    class RandoGhostPlugin {
    public:
        virtual ~RandoGhostPlugin() = default;
        virtual std::vector<std::byte> record(app::GhostRecorder* recorder) = 0;
        virtual void play(utils::ByteStream& stream, RandoGhost& ghost) = 0;
    };

    void play_rando_ghost_plugins(utils::ByteStream& stream, RandoGhost& ghost);
    std::vector<std::byte> record_rando_ghost_plugins(app::GhostRecorder* recorder);
}