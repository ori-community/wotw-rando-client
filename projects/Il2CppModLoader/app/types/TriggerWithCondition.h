#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerWithCondition {
        namespace {
            inline app::TriggerWithCondition__Class* type_info_ref = nullptr;
        }
        inline app::TriggerWithCondition__Class** type_info = &type_info_ref;
        inline app::TriggerWithCondition__Class* get_class() {
            return il2cpp::get_class<app::TriggerWithCondition__Class>(type_info, "", "TriggerWithCondition");
        }
        inline app::TriggerWithCondition* create() {
            return il2cpp::create_object<app::TriggerWithCondition>(get_class());
        }
    } // namespace TriggerWithCondition
} // namespace app::classes::types
