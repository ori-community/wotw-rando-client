#pragma once
#include <Modloader/app/structs/FXAA_ConsoleSettings.h>
#include <Modloader/app/structs/FXAA_ConsoleSettings__Boxed.h>
#include <Modloader/app/structs/FXAA_ConsoleSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAA_ConsoleSettings {
        inline app::FXAA_ConsoleSettings__Class** type_info() {
            static app::FXAA_ConsoleSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FXAA_ConsoleSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FXAA_ConsoleSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_ConsoleSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "FXAA", "ConsoleSettings");
        }
        inline app::FXAA_ConsoleSettings* create() {
            return il2cpp::create_object<app::FXAA_ConsoleSettings>(get_class());
        }
        inline app::FXAA_ConsoleSettings__Boxed* box(app::FXAA_ConsoleSettings value) {
            return il2cpp::box_value<app::FXAA_ConsoleSettings__Boxed>(get_class(), value);
        }
    } // namespace FXAA_ConsoleSettings
} // namespace app::classes::types
