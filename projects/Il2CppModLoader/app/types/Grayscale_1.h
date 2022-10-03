#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grayscale_1 {
        namespace {
            app::Grayscale_1__Class* type_info_ref = nullptr;
        }
        app::Grayscale_1__Class** type_info = &type_info_ref;
        inline app::Grayscale_1__Class* get_class() {
            return il2cpp::get_class<app::Grayscale_1__Class>(type_info, "UnityStandardAssets.ImageEffects", "Grayscale");
        }
        inline app::Grayscale_1* create() {
            return il2cpp::create_object<app::Grayscale_1>(get_class());
        }
    } // namespace Grayscale_1
} // namespace app::classes::types
