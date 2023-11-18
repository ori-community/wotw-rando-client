#pragma once
#include <Modloader/app/structs/SeinAbilityRestrictZone__Array.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone__Array {
        inline app::SeinAbilityRestrictZone__Array__Class** type_info() {
            static app::SeinAbilityRestrictZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAbilityRestrictZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAbilityRestrictZone__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZone__Array__Class>(type_info(), "", "SeinAbilityRestrictZone[]");
        }
        inline app::SeinAbilityRestrictZone__Array* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone__Array>(get_class());
        }
    } // namespace SeinAbilityRestrictZone__Array
} // namespace app::classes::types
