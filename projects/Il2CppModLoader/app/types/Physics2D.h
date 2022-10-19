#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Physics2D {
        inline app::Physics2D__Class** type_info = (app::Physics2D__Class**)(modloader::win::memory::resolve_rva(0x04775FA8));
        inline app::Physics2D__Class* get_class() {
            return il2cpp::get_class<app::Physics2D__Class>(type_info, "UnityEngine", "Physics2D");
        }
        inline app::Physics2D* create() {
            return il2cpp::create_object<app::Physics2D>(get_class());
        }
    } // namespace Physics2D
} // namespace app::classes::types
