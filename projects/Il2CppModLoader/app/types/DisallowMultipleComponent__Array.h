#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DisallowMultipleComponent__Array {
        inline app::DisallowMultipleComponent__Array__Class** type_info = (app::DisallowMultipleComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x0475E828));
        inline app::DisallowMultipleComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::DisallowMultipleComponent__Array__Class>(type_info, "UnityEngine", "DisallowMultipleComponent[]");
        }
        inline app::DisallowMultipleComponent__Array* create() {
            return il2cpp::create_object<app::DisallowMultipleComponent__Array>(get_class());
        }
    } // namespace DisallowMultipleComponent__Array
} // namespace app::classes::types
