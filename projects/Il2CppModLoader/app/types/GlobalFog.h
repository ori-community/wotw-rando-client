#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalFog {
        namespace {
            app::GlobalFog__Class* type_info_ref = nullptr;
        }
        app::GlobalFog__Class** type_info = &type_info_ref;
        inline app::GlobalFog__Class* get_class() {
            return il2cpp::get_class<app::GlobalFog__Class>(type_info, "UnityStandardAssets.ImageEffects", "GlobalFog");
        }
        inline app::GlobalFog* create() {
            return il2cpp::create_object<app::GlobalFog>(get_class());
        }
    } // namespace GlobalFog
} // namespace app::classes::types
