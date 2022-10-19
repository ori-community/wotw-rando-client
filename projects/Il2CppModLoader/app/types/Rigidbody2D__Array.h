#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rigidbody2D__Array {
        namespace {
            inline app::Rigidbody2D__Array__Class* type_info_ref = nullptr;
        }
        inline app::Rigidbody2D__Array__Class** type_info = &type_info_ref;
        inline app::Rigidbody2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody2D__Array__Class>(type_info, "UnityEngine", "Rigidbody2D[]");
        }
        inline app::Rigidbody2D__Array* create() {
            return il2cpp::create_object<app::Rigidbody2D__Array>(get_class());
        }
    } // namespace Rigidbody2D__Array
} // namespace app::classes::types
