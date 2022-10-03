#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WellKnownClientTypeEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WellKnownClientTypeEntry__Class** type_info;
        inline app::WellKnownClientTypeEntry__Class* get_class() {
            return il2cpp::get_class<app::WellKnownClientTypeEntry__Class>(type_info, "System.Runtime.Remoting", "WellKnownClientTypeEntry");
        }
        inline app::WellKnownClientTypeEntry* create() {
            return il2cpp::create_object<app::WellKnownClientTypeEntry>(get_class());
        }
    } // namespace WellKnownClientTypeEntry
} // namespace app::classes::types
