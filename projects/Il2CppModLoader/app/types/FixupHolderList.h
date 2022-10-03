#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixupHolderList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixupHolderList__Class** type_info;
        inline app::FixupHolderList__Class* get_class() {
            return il2cpp::get_class<app::FixupHolderList__Class>(type_info, "System.Runtime.Serialization", "FixupHolderList");
        }
        inline app::FixupHolderList* create() {
            return il2cpp::create_object<app::FixupHolderList>(get_class());
        }
    } // namespace FixupHolderList
} // namespace app::classes::types
