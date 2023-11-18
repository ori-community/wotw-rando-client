#pragma once
#include <Modloader/app/structs/FXAA_Preset.h>
#include <Modloader/app/structs/FXAA_Preset__Array.h>
#include <Modloader/app/structs/FXAA_Preset__Boxed.h>
#include <Modloader/app/structs/FXAA_Preset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAA_Preset {
        inline app::FXAA_Preset__Class** type_info() {
            static app::FXAA_Preset__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FXAA_Preset__Class**)(modloader::win::memory::resolve_rva(0x04747438));
            }
            return cache;
        }
        inline app::FXAA_Preset__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_Preset__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "FXAA", "Preset");
        }
        inline app::FXAA_Preset* create() {
            return il2cpp::create_object<app::FXAA_Preset>(get_class());
        }
        inline app::FXAA_Preset__Boxed* box(app::FXAA_Preset value) {
            return il2cpp::box_value<app::FXAA_Preset__Boxed>(get_class(), value);
        }
        inline app::FXAA_Preset__Array* create_array(int size) {
            return il2cpp::array_new<app::FXAA_Preset__Array>(get_class(), size);
        }
        inline app::FXAA_Preset__Array* create_array(const std::vector<app::FXAA_Preset>& items) {
            return il2cpp::array_new<app::FXAA_Preset__Array>(get_class(), items);
        }
    } // namespace FXAA_Preset
} // namespace app::classes::types
