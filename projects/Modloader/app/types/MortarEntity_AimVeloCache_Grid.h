#pragma once
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Grid.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Grid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_Grid {
        inline app::MortarEntity_AimVeloCache_Grid__Class** type_info() {
            static app::MortarEntity_AimVeloCache_Grid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarEntity_AimVeloCache_Grid__Class**)(modloader::win::memory::resolve_rva(0x047089E8));
            }
            return cache;
        }
        inline app::MortarEntity_AimVeloCache_Grid__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_Grid__Class>(type_info(), "", "MortarEntity+AimVeloCache", "Grid");
        }
        inline app::MortarEntity_AimVeloCache_Grid* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_Grid>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_Grid
} // namespace app::classes::types
