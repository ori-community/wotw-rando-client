#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeleeComboMoveHammerChargeable_State__Enum {
        namespace {
            inline app::MeleeComboMoveHammerChargeable_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MeleeComboMoveHammerChargeable_State__Enum__Class** type_info = &type_info_ref;
        inline app::MeleeComboMoveHammerChargeable_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveHammerChargeable_State__Enum__Class>(type_info, "", "MeleeComboMoveHammerChargeable", "State");
        }
        inline app::MeleeComboMoveHammerChargeable_State__Enum* create() {
            return il2cpp::create_object<app::MeleeComboMoveHammerChargeable_State__Enum>(get_class());
        }
    } // namespace MeleeComboMoveHammerChargeable_State__Enum
} // namespace app::classes::types
