#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinAbilityCondition__Class.h>
#include <Modloader/app/structs/SeinAbilityCondition.h>

namespace app::classes::types {
    namespace SeinAbilityCondition {
        namespace {
            inline app::SeinAbilityCondition__Class* type_info_ref = nullptr;
        }
        inline app::SeinAbilityCondition__Class** type_info = &type_info_ref;
        inline app::SeinAbilityCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityCondition__Class>(type_info, "", "SeinAbilityCondition");
        }
        inline app::SeinAbilityCondition* create() {
            return il2cpp::create_object<app::SeinAbilityCondition>(get_class());
        }
    } // namespace SeinAbilityCondition
} // namespace app::classes::types
