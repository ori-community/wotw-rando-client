#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_EntityParams {
        inline app::MortarEntity_AimVeloCache_EntityParams__Class** type_info = (app::MortarEntity_AimVeloCache_EntityParams__Class**)(modloader::win::memory::resolve_rva(0x047504E8));
        inline app::MortarEntity_AimVeloCache_EntityParams__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_EntityParams__Class>(type_info, "", "MortarEntity+AimVeloCache", "EntityParams");
        }
        inline app::MortarEntity_AimVeloCache_EntityParams* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_EntityParams>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_EntityParams
} // namespace app::classes::types
