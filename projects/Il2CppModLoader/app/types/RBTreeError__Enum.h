#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RBTreeError__Enum {
        namespace {
            app::RBTreeError__Enum__Class* type_info_ref = nullptr;
        }
        app::RBTreeError__Enum__Class** type_info = &type_info_ref;
        inline app::RBTreeError__Enum__Class* get_class() {
            return il2cpp::get_class<app::RBTreeError__Enum__Class>(type_info, "System.Data", "RBTreeError");
        }
        inline app::RBTreeError__Enum* create() {
            return il2cpp::create_object<app::RBTreeError__Enum>(get_class());
        }
    } // namespace RBTreeError__Enum
} // namespace app::classes::types
