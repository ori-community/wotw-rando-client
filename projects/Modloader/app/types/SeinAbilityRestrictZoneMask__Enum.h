#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum__Class.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZoneMask__Enum {
        namespace {
            inline app::SeinAbilityRestrictZoneMask__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityRestrictZoneMask__Enum__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZoneMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZoneMask__Enum__Class>(type_info, "", "SeinAbilityRestrictZoneMask");
        }
        inline app::SeinAbilityRestrictZoneMask__Enum* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZoneMask__Enum>(get_class());
        }
    } // namespace SeinAbilityRestrictZoneMask__Enum
} // namespace app::classes::types
