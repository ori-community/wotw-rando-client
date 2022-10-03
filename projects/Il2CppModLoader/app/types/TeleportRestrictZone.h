#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TeleportRestrictZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TeleportRestrictZone__Class** type_info;
        inline app::TeleportRestrictZone__Class* get_class() {
            return il2cpp::get_class<app::TeleportRestrictZone__Class>(type_info, "", "TeleportRestrictZone");
        }
        inline app::TeleportRestrictZone* create() {
            return il2cpp::create_object<app::TeleportRestrictZone>(get_class());
        }
    } // namespace TeleportRestrictZone
} // namespace app::classes::types
