#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCCollectionMode__Enum {
        namespace {
            app::GCCollectionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::GCCollectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::GCCollectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::GCCollectionMode__Enum__Class>(type_info, "System", "GCCollectionMode");
        }
        inline app::GCCollectionMode__Enum* create() {
            return il2cpp::create_object<app::GCCollectionMode__Enum>(get_class());
        }
    } // namespace GCCollectionMode__Enum
} // namespace app::classes::types
