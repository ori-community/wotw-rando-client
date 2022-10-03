#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaxEnergyHalfContainerPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaxEnergyHalfContainerPickup__Class** type_info;
        inline app::MaxEnergyHalfContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxEnergyHalfContainerPickup__Class>(type_info, "", "MaxEnergyHalfContainerPickup");
        }
        inline app::MaxEnergyHalfContainerPickup* create() {
            return il2cpp::create_object<app::MaxEnergyHalfContainerPickup>(get_class());
        }
    } // namespace MaxEnergyHalfContainerPickup
} // namespace app::classes::types
