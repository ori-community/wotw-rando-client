#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerBase {
        inline app::MeleeComboMoveHammerBase__Class** type_info = (app::MeleeComboMoveHammerBase__Class**)(modloader::win::memory::resolve_rva(0x0474BE68));
        inline app::MeleeComboMoveHammerBase__Class* get_class() {
            return il2cpp::get_class<app::MeleeComboMoveHammerBase__Class>(type_info, "", "MeleeComboMoveHammerBase");
        }
        inline app::MeleeComboMoveHammerBase* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerBase>(get_class());
        }
    } // namespace MeleeComboMoveHammerBase
} // namespace app::classes::types
