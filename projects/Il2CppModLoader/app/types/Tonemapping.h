#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tonemapping {
        namespace {
            app::Tonemapping__Class* type_info_ref = nullptr;
        }
        app::Tonemapping__Class** type_info = &type_info_ref;
        inline app::Tonemapping__Class* get_class() {
            return il2cpp::get_class<app::Tonemapping__Class>(type_info, "UnityStandardAssets.ImageEffects", "Tonemapping");
        }
        inline app::Tonemapping* create() {
            return il2cpp::create_object<app::Tonemapping>(get_class());
        }
    } // namespace Tonemapping
} // namespace app::classes::types
