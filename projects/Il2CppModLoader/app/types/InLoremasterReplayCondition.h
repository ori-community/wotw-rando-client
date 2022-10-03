#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InLoremasterReplayCondition {
        namespace {
            app::InLoremasterReplayCondition__Class* type_info_ref = nullptr;
        }
        app::InLoremasterReplayCondition__Class** type_info = &type_info_ref;
        inline app::InLoremasterReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::InLoremasterReplayCondition__Class>(type_info, "", "InLoremasterReplayCondition");
        }
        inline app::InLoremasterReplayCondition* create() {
            return il2cpp::create_object<app::InLoremasterReplayCondition>(get_class());
        }
    } // namespace InLoremasterReplayCondition
} // namespace app::classes::types
