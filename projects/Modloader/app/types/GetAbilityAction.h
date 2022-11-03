#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetAbilityAction {
        namespace {
            inline app::GetAbilityAction__Class* type_info_ref = nullptr;
        }
        inline app::GetAbilityAction__Class** type_info = &type_info_ref;
        inline app::GetAbilityAction__Class* get_class() {
            return il2cpp::get_class<app::GetAbilityAction__Class>(type_info, "", "GetAbilityAction");
        }
        inline app::GetAbilityAction* create() {
            return il2cpp::create_object<app::GetAbilityAction>(get_class());
        }
    } // namespace GetAbilityAction
} // namespace app::classes::types
