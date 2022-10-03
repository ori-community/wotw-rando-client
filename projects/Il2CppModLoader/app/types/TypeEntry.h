#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeEntry__Class** type_info;
        inline app::TypeEntry__Class* get_class() {
            return il2cpp::get_class<app::TypeEntry__Class>(type_info, "System.Runtime.Remoting", "TypeEntry");
        }
        inline app::TypeEntry* create() {
            return il2cpp::create_object<app::TypeEntry>(get_class());
        }
    } // namespace TypeEntry
} // namespace app::classes::types
