#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceSettings {
        namespace {
            app::TurbulenceSettings__Class* type_info_ref = nullptr;
        }
        app::TurbulenceSettings__Class** type_info = &type_info_ref;
        inline app::TurbulenceSettings__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceSettings__Class>(type_info, "", "TurbulenceSettings");
        }
        inline app::TurbulenceSettings* create() {
            return il2cpp::create_object<app::TurbulenceSettings>(get_class());
        }
    } // namespace TurbulenceSettings
} // namespace app::classes::types
