#pragma once
#include <Modloader/app/structs/AmbientOcclusion_Settings.h>
#include <Modloader/app/structs/AmbientOcclusion_Settings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbientOcclusion_Settings {
        inline app::AmbientOcclusion_Settings__Class** type_info() {
            static app::AmbientOcclusion_Settings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AmbientOcclusion_Settings__Class**)(modloader::win::memory::resolve_rva(0x0471AA30));
            }
            return cache;
        }
        inline app::AmbientOcclusion_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbientOcclusion_Settings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "AmbientOcclusion", "Settings");
        }
        inline app::AmbientOcclusion_Settings* create() {
            return il2cpp::create_object<app::AmbientOcclusion_Settings>(get_class());
        }
    } // namespace AmbientOcclusion_Settings
} // namespace app::classes::types
