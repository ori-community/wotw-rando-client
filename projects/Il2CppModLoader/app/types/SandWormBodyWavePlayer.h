#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormBodyWavePlayer {
        namespace {
            app::SandWormBodyWavePlayer__Class* type_info_ref = nullptr;
        }
        app::SandWormBodyWavePlayer__Class** type_info = &type_info_ref;
        inline app::SandWormBodyWavePlayer__Class* get_class() {
            return il2cpp::get_class<app::SandWormBodyWavePlayer__Class>(type_info, "Moon.Timeline", "SandWormBodyWavePlayer");
        }
        inline app::SandWormBodyWavePlayer* create() {
            return il2cpp::create_object<app::SandWormBodyWavePlayer>(get_class());
        }
    } // namespace SandWormBodyWavePlayer
} // namespace app::classes::types
