#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZoneMask__Enum {
        namespace {
            app::SeinAbilityRestrictZoneMask__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinAbilityRestrictZoneMask__Enum__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZoneMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZoneMask__Enum__Class>(type_info, "", "SeinAbilityRestrictZoneMask");
        }
        inline app::SeinAbilityRestrictZoneMask__Enum* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZoneMask__Enum>(get_class());
        }
    } // namespace SeinAbilityRestrictZoneMask__Enum
} // namespace app::classes::types
