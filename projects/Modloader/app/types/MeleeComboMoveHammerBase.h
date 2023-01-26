#pragma once
#include <Modloader/app/structs/MeleeComboMoveHammerBase.h>
#include <Modloader/app/structs/MeleeComboMoveHammerBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerBase {
        inline app::MeleeComboMoveHammerBase__Class** type_info() {
            static app::MeleeComboMoveHammerBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeleeComboMoveHammerBase__Class**)(modloader::win::memory::resolve_rva(0x0474BE68));
            }
            return cache;
        }
        inline app::MeleeComboMoveHammerBase__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerBase__Class>(type_info(), "", "MeleeComboMoveHammerBase");
        }
        inline app::MeleeComboMoveHammerBase* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerBase>(get_class());
        }
    } // namespace MeleeComboMoveHammerBase
} // namespace app::classes::types
