#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerAbilityStateMatcher {
        namespace {
            inline app::PlayerAbilityStateMatcher__Class* type_info_ref = nullptr;
        }
        inline app::PlayerAbilityStateMatcher__Class** type_info = &type_info_ref;
        inline app::PlayerAbilityStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::PlayerAbilityStateMatcher__Class>(type_info, "", "PlayerAbilityStateMatcher");
        }
        inline app::PlayerAbilityStateMatcher* create() {
            return il2cpp::create_object<app::PlayerAbilityStateMatcher>(get_class());
        }
    } // namespace PlayerAbilityStateMatcher
} // namespace app::classes::types
