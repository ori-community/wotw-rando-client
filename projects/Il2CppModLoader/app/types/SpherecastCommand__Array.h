#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpherecastCommand__Array {
        inline app::SpherecastCommand__Array__Class** type_info = (app::SpherecastCommand__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A830));
        inline app::SpherecastCommand__Array__Class* get_class() {
            return il2cpp::get_class<app::SpherecastCommand__Array__Class>(type_info, "UnityEngine", "SpherecastCommand[]");
        }
        inline app::SpherecastCommand__Array* create() {
            return il2cpp::create_object<app::SpherecastCommand__Array>(get_class());
        }
    } // namespace SpherecastCommand__Array
} // namespace app::classes::types
