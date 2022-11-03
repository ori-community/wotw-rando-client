#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace P3D_Tree {
        inline app::P3D_Tree__Class** type_info = (app::P3D_Tree__Class**)(modloader::win::memory::resolve_rva(0x0472B758));
        inline app::P3D_Tree__Class* get_class() {
            return il2cpp::get_class<app::P3D_Tree__Class>(type_info, "", "P3D_Tree");
        }
        inline app::P3D_Tree* create() {
            return il2cpp::create_object<app::P3D_Tree>(get_class());
        }
    } // namespace P3D_Tree
} // namespace app::classes::types
