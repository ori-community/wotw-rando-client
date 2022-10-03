#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RigidbodyState__Class** type_info;
        inline app::RigidbodyState__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyState__Class>(type_info, "", "RigidbodyState");
        }
        inline app::RigidbodyState* create() {
            return il2cpp::create_object<app::RigidbodyState>(get_class());
        }
        inline app::RigidbodyState__Array* create_array(int size) {
            return il2cpp::array_new<app::RigidbodyState__Array>(get_class(), size);
        }
    } // namespace RigidbodyState
} // namespace app::classes::types
