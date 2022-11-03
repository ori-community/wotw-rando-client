#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZoneMode__Enum {
        namespace {
            inline app::SeinAbilityRestrictZoneMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityRestrictZoneMode__Enum__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZoneMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZoneMode__Enum__Class>(type_info, "", "SeinAbilityRestrictZoneMode");
        }
        inline app::SeinAbilityRestrictZoneMode__Enum* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZoneMode__Enum>(get_class());
        }
    } // namespace SeinAbilityRestrictZoneMode__Enum
} // namespace app::classes::types
