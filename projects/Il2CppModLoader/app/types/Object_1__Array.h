#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Object_1__Array {
        inline app::Object_1__Array__Class** type_info = (app::Object_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04773FF8));
        inline app::Object_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Object_1__Array__Class>(type_info, "UnityEngine", "Object[]");
        }
        inline app::Object_1__Array* create() {
            return il2cpp::create_object<app::Object_1__Array>(get_class());
        }
    } // namespace Object_1__Array
} // namespace app::classes::types
