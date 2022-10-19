#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Rigidbody__Array {
        inline app::Rigidbody__Array__Class** type_info = (app::Rigidbody__Array__Class**)(modloader::win::memory::resolve_rva(0x047878F0));
        inline app::Rigidbody__Array__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody__Array__Class>(type_info, "UnityEngine", "Rigidbody[]");
        }
        inline app::Rigidbody__Array* create() {
            return il2cpp::create_object<app::Rigidbody__Array>(get_class());
        }
    } // namespace Rigidbody__Array
} // namespace app::classes::types
