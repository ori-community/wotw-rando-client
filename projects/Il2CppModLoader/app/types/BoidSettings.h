#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoidSettings {
        namespace {
            app::BoidSettings__Class* type_info_ref = nullptr;
        }
        app::BoidSettings__Class** type_info = &type_info_ref;
        inline app::BoidSettings__Class* get_class() {
            return il2cpp::get_class<app::BoidSettings__Class>(type_info, "", "BoidSettings");
        }
        inline app::BoidSettings* create() {
            return il2cpp::create_object<app::BoidSettings>(get_class());
        }
    } // namespace BoidSettings
} // namespace app::classes::types
