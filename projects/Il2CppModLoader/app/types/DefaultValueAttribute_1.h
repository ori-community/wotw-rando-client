#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultValueAttribute_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultValueAttribute_1__Class** type_info;
        inline app::DefaultValueAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueAttribute_1__Class>(type_info, "UnityEngine.Internal", "DefaultValueAttribute");
        }
        inline app::DefaultValueAttribute_1* create() {
            return il2cpp::create_object<app::DefaultValueAttribute_1>(get_class());
        }
    } // namespace DefaultValueAttribute_1
} // namespace app::classes::types
