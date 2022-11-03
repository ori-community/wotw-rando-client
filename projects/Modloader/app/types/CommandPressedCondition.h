#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CommandPressedCondition {
        namespace {
            inline app::CommandPressedCondition__Class* type_info_ref = nullptr;
        }
        inline app::CommandPressedCondition__Class** type_info = &type_info_ref;
        inline app::CommandPressedCondition__Class* get_class() {
            return il2cpp::get_class<app::CommandPressedCondition__Class>(type_info, "", "CommandPressedCondition");
        }
        inline app::CommandPressedCondition* create() {
            return il2cpp::create_object<app::CommandPressedCondition>(get_class());
        }
    } // namespace CommandPressedCondition
} // namespace app::classes::types
