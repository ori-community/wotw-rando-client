#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormBodyWavePlayer__Class.h>
#include <Modloader/app/structs/SandWormBodyWavePlayer.h>

namespace app::classes::types {
    namespace SandWormBodyWavePlayer {
        namespace {
            inline app::SandWormBodyWavePlayer__Class* type_info_ref = nullptr;
        }
        inline app::SandWormBodyWavePlayer__Class** type_info = &type_info_ref;
        inline app::SandWormBodyWavePlayer__Class* get_class() {
            return il2cpp::get_class<app::SandWormBodyWavePlayer__Class>(type_info, "Moon.Timeline", "SandWormBodyWavePlayer");
        }
        inline app::SandWormBodyWavePlayer* create() {
            return il2cpp::create_object<app::SandWormBodyWavePlayer>(get_class());
        }
    } // namespace SandWormBodyWavePlayer
} // namespace app::classes::types
