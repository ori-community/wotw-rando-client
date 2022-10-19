#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vector3__Array__Array {
        inline app::Vector3__Array__Array__Class** type_info = (app::Vector3__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0470FA88));
        inline app::Vector3__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector3__Array__Array__Class>(type_info, "UnityEngine", "Vector3[][]");
        }
        inline app::Vector3__Array__Array* create() {
            return il2cpp::create_object<app::Vector3__Array__Array>(get_class());
        }
    } // namespace Vector3__Array__Array
} // namespace app::classes::types
