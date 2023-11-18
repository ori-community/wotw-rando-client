#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammer_HitStop_d_94.h>
#include <Modloader/app/structs/MeleeComboMoveHammer_HitStop_d_94__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammer_HitStop_d_94 {
        inline app::MeleeComboMoveHammer_HitStop_d_94__Class** type_info() {
            static app::MeleeComboMoveHammer_HitStop_d_94__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveHammer_HitStop_d_94__Class**)(modloader::win::memory::resolve_rva(0x04731560));
            }
            return cache;
        }
        inline app::MeleeComboMoveHammer_HitStop_d_94__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammer_HitStop_d_94__Class>(type_info(), "", "MeleeComboMoveHammer", "<HitStop>d__94");
        }
        inline app::MeleeComboMoveHammer_HitStop_d_94* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammer_HitStop_d_94>(get_class());
        }
    } // namespace MeleeComboMoveHammer_HitStop_d_94
} // namespace app::classes::types
