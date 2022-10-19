#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaycastCommand__Array {
        inline app::RaycastCommand__Array__Class** type_info = (app::RaycastCommand__Array__Class**)(modloader::win::memory::resolve_rva(0x0474CE18));
        inline app::RaycastCommand__Array__Class* get_class() {
            return il2cpp::get_class<app::RaycastCommand__Array__Class>(type_info, "UnityEngine", "RaycastCommand[]");
        }
        inline app::RaycastCommand__Array* create() {
            return il2cpp::create_object<app::RaycastCommand__Array>(get_class());
        }
    } // namespace RaycastCommand__Array
} // namespace app::classes::types
