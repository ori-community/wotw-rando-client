#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_Packer {
        inline app::MortarEntity_AimVeloCache_Packer__Class** type_info = (app::MortarEntity_AimVeloCache_Packer__Class**)(modloader::win::memory::resolve_rva(0x047555E0));
        inline app::MortarEntity_AimVeloCache_Packer__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_Packer__Class>(type_info, "", "MortarEntity+AimVeloCache", "Packer");
        }
        inline app::MortarEntity_AimVeloCache_Packer* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_Packer>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_Packer
} // namespace app::classes::types
