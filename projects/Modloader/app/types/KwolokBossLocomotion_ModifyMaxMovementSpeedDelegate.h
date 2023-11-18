#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate.h>
#include <Modloader/app/structs/KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate {
        inline app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class** type_info() {
            static app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class**)(modloader::win::memory::resolve_rva(0x0470A578));
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate__Class>(type_info(), "", "KwolokBossLocomotion", "ModifyMaxMovementSpeedDelegate");
        }
        inline app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate>(get_class());
        }
    } // namespace KwolokBossLocomotion_ModifyMaxMovementSpeedDelegate
} // namespace app::classes::types
