#pragma once
#include <Modloader/app/structs/SandWormBodyWavePlayer.h>
#include <Modloader/app/structs/SandWormBodyWavePlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormBodyWavePlayer {
        inline app::SandWormBodyWavePlayer__Class** type_info() {
            static app::SandWormBodyWavePlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormBodyWavePlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormBodyWavePlayer__Class* get_class() {
            return il2cpp::get_class<app::SandWormBodyWavePlayer__Class>(type_info(), "Moon.Timeline", "SandWormBodyWavePlayer");
        }
        inline app::SandWormBodyWavePlayer* create() {
            return il2cpp::create_object<app::SandWormBodyWavePlayer>(get_class());
        }
    } // namespace SandWormBodyWavePlayer
} // namespace app::classes::types
