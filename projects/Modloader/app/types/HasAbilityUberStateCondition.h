#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HasAbilityUberStateCondition__Class.h>
#include <Modloader/app/structs/HasAbilityUberStateCondition.h>

namespace app::classes::types {
    namespace HasAbilityUberStateCondition {
        namespace {
            inline app::HasAbilityUberStateCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasAbilityUberStateCondition__Class** type_info = &type_info_ref;
        inline app::HasAbilityUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAbilityUberStateCondition__Class>(type_info, "", "HasAbilityUberStateCondition");
        }
        inline app::HasAbilityUberStateCondition* create() {
            return il2cpp::create_object<app::HasAbilityUberStateCondition>(get_class());
        }
    } // namespace HasAbilityUberStateCondition
} // namespace app::classes::types
