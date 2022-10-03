#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyState__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RigidbodyState__Array__Class** type_info;
        inline app::RigidbodyState__Array__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyState__Array__Class>(type_info, "", "RigidbodyState[]");
        }
        inline app::RigidbodyState__Array* create() {
            return il2cpp::create_object<app::RigidbodyState__Array>(get_class());
        }
    } // namespace RigidbodyState__Array
} // namespace app::classes::types
