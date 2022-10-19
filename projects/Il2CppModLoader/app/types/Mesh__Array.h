#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Mesh__Array {
        inline app::Mesh__Array__Class** type_info = (app::Mesh__Array__Class**)(modloader::win::memory::resolve_rva(0x04779838));
        inline app::Mesh__Array__Class* get_class() {
            return il2cpp::get_class<app::Mesh__Array__Class>(type_info, "UnityEngine", "Mesh[]");
        }
        inline app::Mesh__Array* create() {
            return il2cpp::create_object<app::Mesh__Array>(get_class());
        }
    } // namespace Mesh__Array
} // namespace app::classes::types
