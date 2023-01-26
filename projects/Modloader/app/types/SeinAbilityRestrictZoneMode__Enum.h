#pragma once
#include <Modloader/app/structs/SeinAbilityRestrictZoneMode__Enum.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZoneMode__Enum {
        inline app::SeinAbilityRestrictZoneMode__Enum__Class** type_info() {
            static app::SeinAbilityRestrictZoneMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityRestrictZoneMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityRestrictZoneMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZoneMode__Enum__Class>(type_info(), "", "SeinAbilityRestrictZoneMode");
        }
        inline app::SeinAbilityRestrictZoneMode__Enum* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZoneMode__Enum>(get_class());
        }
    } // namespace SeinAbilityRestrictZoneMode__Enum
} // namespace app::classes::types
