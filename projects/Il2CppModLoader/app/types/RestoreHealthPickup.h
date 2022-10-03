#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RestoreHealthPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RestoreHealthPickup__Class** type_info;
        inline app::RestoreHealthPickup__Class* get_class() {
            return il2cpp::get_class<app::RestoreHealthPickup__Class>(type_info, "", "RestoreHealthPickup");
        }
        inline app::RestoreHealthPickup* create() {
            return il2cpp::create_object<app::RestoreHealthPickup>(get_class());
        }
    } // namespace RestoreHealthPickup
} // namespace app::classes::types
