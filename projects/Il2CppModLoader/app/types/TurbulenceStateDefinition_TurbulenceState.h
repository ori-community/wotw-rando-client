#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceStateDefinition_TurbulenceState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurbulenceStateDefinition_TurbulenceState__Class** type_info;
        inline app::TurbulenceStateDefinition_TurbulenceState__Class* get_class() {
            return il2cpp::get_nested_class<app::TurbulenceStateDefinition_TurbulenceState__Class>(type_info, "", "TurbulenceStateDefinition", "TurbulenceState");
        }
        inline app::TurbulenceStateDefinition_TurbulenceState* create() {
            return il2cpp::create_object<app::TurbulenceStateDefinition_TurbulenceState>(get_class());
        }
        inline app::TurbulenceStateDefinition_TurbulenceState__Array* create_array(int size) {
            return il2cpp::array_new<app::TurbulenceStateDefinition_TurbulenceState__Array>(get_class(), size);
        }
    } // namespace TurbulenceStateDefinition_TurbulenceState
} // namespace app::classes::types
