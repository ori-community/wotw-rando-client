#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivatedClientTypeEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivatedClientTypeEntry__Class** type_info;
        inline app::ActivatedClientTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::ActivatedClientTypeEntry__Class>(type_info, "System.Runtime.Remoting", "ActivatedClientTypeEntry");
        }
        inline app::ActivatedClientTypeEntry* create() {
            return il2cpp::create_object<app::ActivatedClientTypeEntry>(get_class());
        }
    } // namespace ActivatedClientTypeEntry
} // namespace app::classes::types
