#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaxHealthContainerPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaxHealthContainerPickup__Class** type_info;
        inline app::MaxHealthContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxHealthContainerPickup__Class>(type_info, "", "MaxHealthContainerPickup");
        }
        inline app::MaxHealthContainerPickup* create() {
            return il2cpp::create_object<app::MaxHealthContainerPickup>(get_class());
        }
    } // namespace MaxHealthContainerPickup
} // namespace app::classes::types
