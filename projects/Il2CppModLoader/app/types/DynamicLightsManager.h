#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicLightsManager {
        namespace {
            app::DynamicLightsManager__Class* type_info_ref = nullptr;
        }
        app::DynamicLightsManager__Class** type_info = &type_info_ref;
        inline app::DynamicLightsManager__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightsManager__Class>(type_info, "", "DynamicLightsManager");
        }
        inline app::DynamicLightsManager* create() {
            return il2cpp::create_object<app::DynamicLightsManager>(get_class());
        }
    } // namespace DynamicLightsManager
} // namespace app::classes::types
