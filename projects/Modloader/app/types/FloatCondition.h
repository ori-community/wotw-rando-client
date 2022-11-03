#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatCondition {
        namespace {
            inline app::FloatCondition__Class* type_info_ref = nullptr;
        }
        inline app::FloatCondition__Class** type_info = &type_info_ref;
        inline app::FloatCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatCondition__Class>(type_info, "Moon.BehaviourSystem", "FloatCondition");
        }
        inline app::FloatCondition* create() {
            return il2cpp::create_object<app::FloatCondition>(get_class());
        }
    } // namespace FloatCondition
} // namespace app::classes::types
