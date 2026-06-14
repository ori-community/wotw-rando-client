#pragma once
#include <Modloader/app/structs/LightShadingZoneEditorSetup.h>
#include <Modloader/app/structs/LightShadingZoneEditorSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightShadingZoneEditorSetup {
        inline app::LightShadingZoneEditorSetup__Class** type_info() {
            static app::LightShadingZoneEditorSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightShadingZoneEditorSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightShadingZoneEditorSetup__Class* get_class() {
            return il2cpp::get_class<app::LightShadingZoneEditorSetup__Class>(type_info(), "", "LightShadingZoneEditorSetup");
        }
        inline app::LightShadingZoneEditorSetup* create() {
            return il2cpp::create_object<app::LightShadingZoneEditorSetup>(get_class());
        }
    } // namespace LightShadingZoneEditorSetup
} // namespace app::classes::types
