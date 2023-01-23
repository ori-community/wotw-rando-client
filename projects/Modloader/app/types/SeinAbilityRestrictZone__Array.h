#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone__Array__Class.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone__Array.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone__Array {
        namespace {
            inline app::SeinAbilityRestrictZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityRestrictZone__Array__Class** type_info = &type_info_ref;
        inline app::SeinAbilityRestrictZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZone__Array__Class>(type_info, "", "SeinAbilityRestrictZone[]");
        }
        inline app::SeinAbilityRestrictZone__Array* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone__Array>(get_class());
        }
    } // namespace SeinAbilityRestrictZone__Array
} // namespace app::classes::types
