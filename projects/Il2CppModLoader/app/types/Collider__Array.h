#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Collider__Array {
        inline app::Collider__Array__Class** type_info = (app::Collider__Array__Class**)(modloader::win::memory::resolve_rva(0x0477B1C0));
        inline app::Collider__Array__Class* get_class() {
            return il2cpp::get_class<app::Collider__Array__Class>(type_info, "UnityEngine", "Collider[]");
        }
        inline app::Collider__Array* create() {
            return il2cpp::create_object<app::Collider__Array>(get_class());
        }
    } // namespace Collider__Array
} // namespace app::classes::types
