#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Material__Array__Array {
        inline app::Material__Array__Array__Class** type_info = (app::Material__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04705C90));
        inline app::Material__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Material__Array__Array__Class>(type_info, "UnityEngine", "Material[][]");
        }
        inline app::Material__Array__Array* create() {
            return il2cpp::create_object<app::Material__Array__Array>(get_class());
        }
    } // namespace Material__Array__Array
} // namespace app::classes::types
