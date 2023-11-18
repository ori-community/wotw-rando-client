#pragma once
#include <Modloader/app/structs/RBTreeError__Enum.h>
#include <Modloader/app/structs/RBTreeError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RBTreeError__Enum {
        inline app::RBTreeError__Enum__Class** type_info() {
            static app::RBTreeError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RBTreeError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RBTreeError__Enum__Class* get_class() {
            return il2cpp::get_class<app::RBTreeError__Enum__Class>(type_info(), "System.Data", "RBTreeError");
        }
        inline app::RBTreeError__Enum* create() {
            return il2cpp::create_object<app::RBTreeError__Enum>(get_class());
        }
    } // namespace RBTreeError__Enum
} // namespace app::classes::types
