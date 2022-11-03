#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinHomingMissileSpell_State__Enum {
        namespace {
            inline app::SeinHomingMissileSpell_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinHomingMissileSpell_State__Enum__Class** type_info = &type_info_ref;
        inline app::SeinHomingMissileSpell_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinHomingMissileSpell_State__Enum__Class>(type_info, "", "SeinHomingMissileSpell", "State");
        }
        inline app::SeinHomingMissileSpell_State__Enum* create() {
            return il2cpp::create_object<app::SeinHomingMissileSpell_State__Enum>(get_class());
        }
    } // namespace SeinHomingMissileSpell_State__Enum
} // namespace app::classes::types
