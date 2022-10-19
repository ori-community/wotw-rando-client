#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CapsuleCollider__Array {
        inline app::CapsuleCollider__Array__Class** type_info = (app::CapsuleCollider__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B118));
        inline app::CapsuleCollider__Array__Class* get_class() {
            return il2cpp::get_class<app::CapsuleCollider__Array__Class>(type_info, "UnityEngine", "CapsuleCollider[]");
        }
        inline app::CapsuleCollider__Array* create() {
            return il2cpp::create_object<app::CapsuleCollider__Array>(get_class());
        }
    } // namespace CapsuleCollider__Array
} // namespace app::classes::types
