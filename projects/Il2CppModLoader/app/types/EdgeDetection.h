#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EdgeDetection {
        namespace {
            app::EdgeDetection__Class* type_info_ref = nullptr;
        }
        app::EdgeDetection__Class** type_info = &type_info_ref;
        inline app::EdgeDetection__Class* get_class() {
            return il2cpp::get_class<app::EdgeDetection__Class>(type_info, "UnityStandardAssets.ImageEffects", "EdgeDetection");
        }
        inline app::EdgeDetection* create() {
            return il2cpp::create_object<app::EdgeDetection>(get_class());
        }
    } // namespace EdgeDetection
} // namespace app::classes::types
