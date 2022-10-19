#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GCCollectionMode__Enum {
        namespace {
            inline app::GCCollectionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GCCollectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::GCCollectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::GCCollectionMode__Enum__Class>(type_info, "System", "GCCollectionMode");
        }
        inline app::GCCollectionMode__Enum* create() {
            return il2cpp::create_object<app::GCCollectionMode__Enum>(get_class());
        }
    } // namespace GCCollectionMode__Enum
} // namespace app::classes::types
