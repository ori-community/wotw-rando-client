#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Transform_Enumerator {
        inline app::Transform_Enumerator__Class** type_info = (app::Transform_Enumerator__Class**)(modloader::win::memory::resolve_rva(0x04794208));
        inline app::Transform_Enumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Transform_Enumerator__Class>(type_info, "UnityEngine", "Transform", "Enumerator");
        }
        inline app::Transform_Enumerator* create() {
            return il2cpp::create_object<app::Transform_Enumerator>(get_class());
        }
    } // namespace Transform_Enumerator
} // namespace app::classes::types
