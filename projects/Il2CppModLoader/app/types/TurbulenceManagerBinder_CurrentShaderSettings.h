#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceManagerBinder_CurrentShaderSettings {
        namespace {
            app::TurbulenceManagerBinder_CurrentShaderSettings__Class* type_info_ref = nullptr;
        }
        app::TurbulenceManagerBinder_CurrentShaderSettings__Class** type_info = &type_info_ref;
        inline app::TurbulenceManagerBinder_CurrentShaderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceManagerBinder_CurrentShaderSettings__Class>(type_info, "", "TurbulenceManagerBinder", "CurrentShaderSettings");
        }
        inline app::TurbulenceManagerBinder_CurrentShaderSettings* create() {
            return il2cpp::create_object<app::TurbulenceManagerBinder_CurrentShaderSettings>(get_class());
        }
        inline app::TurbulenceManagerBinder_CurrentShaderSettings__Boxed* box(app::TurbulenceManagerBinder_CurrentShaderSettings value) {
            return il2cpp::box_value<app::TurbulenceManagerBinder_CurrentShaderSettings__Boxed>(get_class(), value);
        }
    } // namespace TurbulenceManagerBinder_CurrentShaderSettings
} // namespace app::classes::types
