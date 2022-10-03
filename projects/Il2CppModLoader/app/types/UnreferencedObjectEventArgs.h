#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnreferencedObjectEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnreferencedObjectEventArgs__Class** type_info;
        inline app::UnreferencedObjectEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UnreferencedObjectEventArgs__Class>(type_info, "System.Xml.Serialization", "UnreferencedObjectEventArgs");
        }
        inline app::UnreferencedObjectEventArgs* create() {
            return il2cpp::create_object<app::UnreferencedObjectEventArgs>(get_class());
        }
    } // namespace UnreferencedObjectEventArgs
} // namespace app::classes::types
