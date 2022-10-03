#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectHolderList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectHolderList__Class** type_info;
        inline app::ObjectHolderList__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolderList__Class>(type_info, "System.Runtime.Serialization", "ObjectHolderList");
        }
        inline app::ObjectHolderList* create() {
            return il2cpp::create_object<app::ObjectHolderList>(get_class());
        }
    } // namespace ObjectHolderList
} // namespace app::classes::types
