#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostStateDefinition_PostState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PostStateDefinition_PostState__Class** type_info;
        inline app::PostStateDefinition_PostState__Class* get_class() {
            return il2cpp::get_nested_class<app::PostStateDefinition_PostState__Class>(type_info, "", "PostStateDefinition", "PostState");
        }
        inline app::PostStateDefinition_PostState* create() {
            return il2cpp::create_object<app::PostStateDefinition_PostState>(get_class());
        }
        inline app::PostStateDefinition_PostState__Array* create_array(int size) {
            return il2cpp::array_new<app::PostStateDefinition_PostState__Array>(get_class(), size);
        }
    } // namespace PostStateDefinition_PostState
} // namespace app::classes::types
