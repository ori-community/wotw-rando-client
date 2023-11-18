#pragma once
#include <Modloader/app/structs/SeinGrenadeAttack_Preset__Enum.h>
#include <Modloader/app/structs/SeinGrenadeAttack_Preset__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_Preset__Enum {
        inline app::SeinGrenadeAttack_Preset__Enum__Class** type_info() {
            static app::SeinGrenadeAttack_Preset__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrenadeAttack_Preset__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrenadeAttack_Preset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_Preset__Enum__Class>(type_info(), "", "SeinGrenadeAttack", "Preset");
        }
        inline app::SeinGrenadeAttack_Preset__Enum* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_Preset__Enum>(get_class());
        }
    } // namespace SeinGrenadeAttack_Preset__Enum
} // namespace app::classes::types
