#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZoneMode__Enum {
        namespace {
            app::SeinAbilityRestrictZoneMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SeinAbilityRestrictZoneMode__Enum__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZoneMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZoneMode__Enum__Class>(type_info, "", "SeinAbilityRestrictZoneMode");
        }
        inline app::SeinAbilityRestrictZoneMode__Enum* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZoneMode__Enum>(get_class());
        }
    } // namespace SeinAbilityRestrictZoneMode__Enum
} // namespace app::classes::types
