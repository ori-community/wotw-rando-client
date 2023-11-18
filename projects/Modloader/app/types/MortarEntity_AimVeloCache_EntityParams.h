#pragma once
#include <Modloader/app/structs/MortarEntity_AimVeloCache_EntityParams.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache_EntityParams__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_EntityParams {
        inline app::MortarEntity_AimVeloCache_EntityParams__Class** type_info() {
            static app::MortarEntity_AimVeloCache_EntityParams__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarEntity_AimVeloCache_EntityParams__Class**)(modloader::win::memory::resolve_rva(0x047504E8));
            }
            return cache;
        }
        inline app::MortarEntity_AimVeloCache_EntityParams__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_EntityParams__Class>(type_info(), "", "MortarEntity+AimVeloCache", "EntityParams");
        }
        inline app::MortarEntity_AimVeloCache_EntityParams* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_EntityParams>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_EntityParams
} // namespace app::classes::types
