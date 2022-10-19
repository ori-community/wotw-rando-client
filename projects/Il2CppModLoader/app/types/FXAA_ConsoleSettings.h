#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FXAA_ConsoleSettings {
        namespace {
            inline app::FXAA_ConsoleSettings__Class* type_info_ref = nullptr;
        }
        inline app::FXAA_ConsoleSettings__Class** type_info = &type_info_ref;
        inline app::FXAA_ConsoleSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_ConsoleSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA", "ConsoleSettings");
        }
        inline app::FXAA_ConsoleSettings* create() {
            return il2cpp::create_object<app::FXAA_ConsoleSettings>(get_class());
        }
        inline app::FXAA_ConsoleSettings__Boxed* box(app::FXAA_ConsoleSettings value) {
            return il2cpp::box_value<app::FXAA_ConsoleSettings__Boxed>(get_class(), value);
        }
    } // namespace FXAA_ConsoleSettings
} // namespace app::classes::types
