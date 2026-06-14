#pragma once
#include <Modloader/app/structs/Index_IndexTree.h>
#include <Modloader/app/structs/Index_IndexTree__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Index_IndexTree {
        inline app::Index_IndexTree__Class** type_info() {
            static app::Index_IndexTree__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Index_IndexTree__Class**)(modloader::win::memory::resolve_rva(0x04757D48));
            }
            return cache;
        }
        inline app::Index_IndexTree__Class* get_class() {
            return il2cpp::get_nested_class<app::Index_IndexTree__Class>(type_info(), "System.Data", "Index", "IndexTree");
        }
        inline app::Index_IndexTree* create() {
            return il2cpp::create_object<app::Index_IndexTree>(get_class());
        }
    } // namespace Index_IndexTree
} // namespace app::classes::types
