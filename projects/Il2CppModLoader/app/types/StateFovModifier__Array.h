#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateFovModifier__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StateFovModifier__Array__Class** type_info;
        inline app::StateFovModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::StateFovModifier__Array__Class>(type_info, "", "StateFovModifier[]");
        }
        inline app::StateFovModifier__Array* create() {
            return il2cpp::create_object<app::StateFovModifier__Array>(get_class());
        }
    } // namespace StateFovModifier__Array
} // namespace app::classes::types
