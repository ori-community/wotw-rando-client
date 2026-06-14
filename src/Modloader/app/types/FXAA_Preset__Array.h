#pragma once
#include <Modloader/app/structs/FXAA_Preset__Array.h>
#include <Modloader/app/structs/FXAA_Preset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAA_Preset__Array {
        inline app::FXAA_Preset__Array__Class** type_info() {
            static app::FXAA_Preset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FXAA_Preset__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D228));
            }
            return cache;
        }
        inline app::FXAA_Preset__Array__Class* get_class() {
            return il2cpp::get_class<app::FXAA_Preset__Array__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "FXAA+Preset[]");
        }
        inline app::FXAA_Preset__Array* create() {
            return il2cpp::create_object<app::FXAA_Preset__Array>(get_class());
        }
    } // namespace FXAA_Preset__Array
} // namespace app::classes::types
