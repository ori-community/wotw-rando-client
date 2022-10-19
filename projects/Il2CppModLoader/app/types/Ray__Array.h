#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ray__Array {
        inline app::Ray__Array__Class** type_info = (app::Ray__Array__Class**)(modloader::win::memory::resolve_rva(0x04719160));
        inline app::Ray__Array__Class* get_class() {
            return il2cpp::get_class<app::Ray__Array__Class>(type_info, "UnityEngine", "Ray[]");
        }
        inline app::Ray__Array* create() {
            return il2cpp::create_object<app::Ray__Array>(get_class());
        }
    } // namespace Ray__Array
} // namespace app::classes::types
