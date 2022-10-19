#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuadTree {
        inline app::QuadTree__Class** type_info = (app::QuadTree__Class**)(modloader::win::memory::resolve_rva(0x0478E210));
        inline app::QuadTree__Class* get_class() {
            return il2cpp::get_class<app::QuadTree__Class>(type_info, "Moon", "QuadTree");
        }
        inline app::QuadTree* create() {
            return il2cpp::create_object<app::QuadTree>(get_class());
        }
    } // namespace QuadTree
} // namespace app::classes::types
