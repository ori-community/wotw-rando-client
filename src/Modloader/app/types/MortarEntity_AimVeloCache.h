#pragma once
#include <Modloader/app/structs/MortarEntity_AimVeloCache.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarEntity_AimVeloCache {
        inline app::MortarEntity_AimVeloCache__Class** type_info() {
            static app::MortarEntity_AimVeloCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarEntity_AimVeloCache__Class**)(modloader::win::memory::resolve_rva(0x0477C808));
            }
            return cache;
        }
        inline app::MortarEntity_AimVeloCache__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarEntity_AimVeloCache__Class>(type_info(), "", "MortarEntity", "AimVeloCache");
        }
        inline app::MortarEntity_AimVeloCache* create() {
            return il2cpp::create_object<app::MortarEntity_AimVeloCache>(get_class());
        }
    } // namespace MortarEntity_AimVeloCache
} // namespace app::classes::types
