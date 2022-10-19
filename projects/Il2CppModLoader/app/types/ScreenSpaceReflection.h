#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenSpaceReflection {
        inline app::ScreenSpaceReflection__Class** type_info = (app::ScreenSpaceReflection__Class**)(modloader::win::memory::resolve_rva(0x047733A0));
        inline app::ScreenSpaceReflection__Class* get_class() {
            return il2cpp::get_class<app::ScreenSpaceReflection__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ScreenSpaceReflection");
        }
        inline app::ScreenSpaceReflection* create() {
            return il2cpp::create_object<app::ScreenSpaceReflection>(get_class());
        }
    } // namespace ScreenSpaceReflection
} // namespace app::classes::types
