#pragma once
#include <Modloader/app/structs/QuadTree.h>
#include <Modloader/app/structs/QuadTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuadTree {
        inline app::QuadTree__Class** type_info() {
            static app::QuadTree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuadTree__Class**)(modloader::win::memory::resolve_rva(0x0478E210));
            }
            return cache;
        }
        inline app::QuadTree__Class* get_class() {
            return il2cpp::get_class<app::QuadTree__Class>(type_info(), "Moon", "QuadTree");
        }
        inline app::QuadTree* create() {
            return il2cpp::create_object<app::QuadTree>(get_class());
        }
    } // namespace QuadTree
} // namespace app::classes::types
