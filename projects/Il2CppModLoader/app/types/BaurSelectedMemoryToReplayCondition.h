#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaurSelectedMemoryToReplayCondition {
        namespace {
            app::BaurSelectedMemoryToReplayCondition__Class* type_info_ref = nullptr;
        }
        app::BaurSelectedMemoryToReplayCondition__Class** type_info = &type_info_ref;
        inline app::BaurSelectedMemoryToReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::BaurSelectedMemoryToReplayCondition__Class>(type_info, "", "BaurSelectedMemoryToReplayCondition");
        }
        inline app::BaurSelectedMemoryToReplayCondition* create() {
            return il2cpp::create_object<app::BaurSelectedMemoryToReplayCondition>(get_class());
        }
    } // namespace BaurSelectedMemoryToReplayCondition
} // namespace app::classes::types
