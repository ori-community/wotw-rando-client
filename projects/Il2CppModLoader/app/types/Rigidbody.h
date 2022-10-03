#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rigidbody {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Rigidbody__Class** type_info;
        inline app::Rigidbody__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody__Class>(type_info, "UnityEngine", "Rigidbody");
        }
        inline app::Rigidbody* create() {
            return il2cpp::create_object<app::Rigidbody>(get_class());
        }
        inline app::Rigidbody__Array* create_array(int size) {
            return il2cpp::array_new<app::Rigidbody__Array>(get_class(), size);
        }
    } // namespace Rigidbody
} // namespace app::classes::types
