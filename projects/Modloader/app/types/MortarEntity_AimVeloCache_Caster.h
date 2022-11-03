#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_Caster {
        inline app::MortarEntity_AimVeloCache_Caster__Class** type_info = (app::MortarEntity_AimVeloCache_Caster__Class**)(modloader::win::memory::resolve_rva(0x0472F368));
        inline app::MortarEntity_AimVeloCache_Caster__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_Caster__Class>(type_info, "", "MortarEntity+AimVeloCache", "Caster");
        }
        inline app::MortarEntity_AimVeloCache_Caster* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_Caster>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_Caster
} // namespace app::classes::types
