#pragma once
#include <Modloader/app/structs/InLoremasterReplayCondition.h>
#include <Modloader/app/structs/InLoremasterReplayCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InLoremasterReplayCondition {
        inline app::InLoremasterReplayCondition__Class** type_info() {
            static app::InLoremasterReplayCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InLoremasterReplayCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InLoremasterReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::InLoremasterReplayCondition__Class>(type_info(), "", "InLoremasterReplayCondition");
        }
        inline app::InLoremasterReplayCondition* create() {
            return il2cpp::create_object<app::InLoremasterReplayCondition>(get_class());
        }
    } // namespace InLoremasterReplayCondition
} // namespace app::classes::types
