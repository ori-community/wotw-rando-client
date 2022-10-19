#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsAct3EndedCondition {
        namespace {
            inline app::IsAct3EndedCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsAct3EndedCondition__Class** type_info = &type_info_ref;
        inline app::IsAct3EndedCondition__Class* get_class() {
            return il2cpp::get_class<app::IsAct3EndedCondition__Class>(type_info, "", "IsAct3EndedCondition");
        }
        inline app::IsAct3EndedCondition* create() {
            return il2cpp::create_object<app::IsAct3EndedCondition>(get_class());
        }
    } // namespace IsAct3EndedCondition
} // namespace app::classes::types
