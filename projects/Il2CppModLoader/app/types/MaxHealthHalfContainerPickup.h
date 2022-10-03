#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaxHealthHalfContainerPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaxHealthHalfContainerPickup__Class** type_info;
        inline app::MaxHealthHalfContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxHealthHalfContainerPickup__Class>(type_info, "", "MaxHealthHalfContainerPickup");
        }
        inline app::MaxHealthHalfContainerPickup* create() {
            return il2cpp::create_object<app::MaxHealthHalfContainerPickup>(get_class());
        }
    } // namespace MaxHealthHalfContainerPickup
} // namespace app::classes::types
