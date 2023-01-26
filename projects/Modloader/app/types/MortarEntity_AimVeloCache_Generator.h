#pragma once
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Generator.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Generator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache_Generator {
        inline app::MortarEntity_AimVeloCache_Generator__Class** type_info() {
            static app::MortarEntity_AimVeloCache_Generator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarEntity_AimVeloCache_Generator__Class**)(modloader::win::memory::resolve_rva(0x0471A1A8));
            }
            return cache;
        }
        inline app::MortarEntity_AimVeloCache_Generator__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache_Generator__Class>(type_info(), "", "MortarEntity+AimVeloCache", "Generator");
        }
        inline app::MortarEntity_AimVeloCache_Generator* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache_Generator>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache_Generator
} // namespace app::classes::types
