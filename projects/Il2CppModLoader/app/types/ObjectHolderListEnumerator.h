#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectHolderListEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectHolderListEnumerator__Class** type_info;
        inline app::ObjectHolderListEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ObjectHolderListEnumerator__Class>(type_info, "System.Runtime.Serialization", "ObjectHolderListEnumerator");
        }
        inline app::ObjectHolderListEnumerator* create() {
            return il2cpp::create_object<app::ObjectHolderListEnumerator>(get_class());
        }
    } // namespace ObjectHolderListEnumerator
} // namespace app::classes::types
