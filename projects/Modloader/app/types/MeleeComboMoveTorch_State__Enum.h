#pragma once
#include <Modloader/app/structs/MeleeComboMoveTorch_State__Enum.h>
#include <Modloader/app/structs/MeleeComboMoveTorch_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeleeComboMoveTorch_State__Enum {
        inline app::MeleeComboMoveTorch_State__Enum__Class** type_info() {
            static app::MeleeComboMoveTorch_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeleeComboMoveTorch_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeleeComboMoveTorch_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MeleeComboMoveTorch_State__Enum__Class>(type_info(), "", "MeleeComboMoveTorch", "State");
        }
        inline app::MeleeComboMoveTorch_State__Enum* create() {
            return il2cpp::create_object<app::MeleeComboMoveTorch_State__Enum>(get_class());
        }
    } // namespace MeleeComboMoveTorch_State__Enum
} // namespace app::classes::types
