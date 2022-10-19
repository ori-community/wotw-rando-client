#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaycastHit__Array {
        inline app::RaycastHit__Array__Class** type_info = (app::RaycastHit__Array__Class**)(modloader::win::memory::resolve_rva(0x04727068));
        inline app::RaycastHit__Array__Class* get_class() {
            return il2cpp::get_class<app::RaycastHit__Array__Class>(type_info, "UnityEngine", "RaycastHit[]");
        }
        inline app::RaycastHit__Array* create() {
            return il2cpp::create_object<app::RaycastHit__Array>(get_class());
        }
    } // namespace RaycastHit__Array
} // namespace app::classes::types
