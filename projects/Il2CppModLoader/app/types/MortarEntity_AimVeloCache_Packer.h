#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_Packer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarEntity_AimVeloCache_Packer__Class** type_info;
        inline app::MortarEntity_AimVeloCache_Packer__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_Packer__Class>(type_info, "", "MortarEntity+AimVeloCache", "Packer");
        }
        inline app::MortarEntity_AimVeloCache_Packer* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_Packer>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_Packer
} // namespace app::classes::types
