#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FXAA_Preset__Array {
        inline app::FXAA_Preset__Array__Class** type_info = (app::FXAA_Preset__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D228));
        inline app::FXAA_Preset__Array__Class* get_class() {
            return il2cpp::get_class<app::FXAA_Preset__Array__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA+Preset[]");
        }
        inline app::FXAA_Preset__Array* create() {
            return il2cpp::create_object<app::FXAA_Preset__Array>(get_class());
        }
    } // namespace FXAA_Preset__Array
} // namespace app::classes::types
