#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenSpaceAmbientObscurance {
        namespace {
            app::ScreenSpaceAmbientObscurance__Class* type_info_ref = nullptr;
        }
        app::ScreenSpaceAmbientObscurance__Class** type_info = &type_info_ref;
        inline app::ScreenSpaceAmbientObscurance__Class* get_class() {
            return il2cpp::get_class<app::ScreenSpaceAmbientObscurance__Class>(type_info, "UnityStandardAssets.ImageEffects", "ScreenSpaceAmbientObscurance");
        }
        inline app::ScreenSpaceAmbientObscurance* create() {
            return il2cpp::create_object<app::ScreenSpaceAmbientObscurance>(get_class());
        }
    } // namespace ScreenSpaceAmbientObscurance
} // namespace app::classes::types
