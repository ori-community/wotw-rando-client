#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrenadeAttack_Preset__Enum {
        namespace {
            inline app::SeinGrenadeAttack_Preset__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrenadeAttack_Preset__Enum__Class** type_info = &type_info_ref;
        inline app::SeinGrenadeAttack_Preset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrenadeAttack_Preset__Enum__Class>(type_info, "", "SeinGrenadeAttack", "Preset");
        }
        inline app::SeinGrenadeAttack_Preset__Enum* create() {
            return il2cpp::create_object<app::SeinGrenadeAttack_Preset__Enum>(get_class());
        }
    } // namespace SeinGrenadeAttack_Preset__Enum
} // namespace app::classes::types
