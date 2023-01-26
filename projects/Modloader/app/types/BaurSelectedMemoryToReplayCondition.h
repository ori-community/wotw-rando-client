#pragma once
#include <Modloader/app/structs/BaurSelectedMemoryToReplayCondition.h>
#include <Modloader/app/structs/BaurSelectedMemoryToReplayCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaurSelectedMemoryToReplayCondition {
        inline app::BaurSelectedMemoryToReplayCondition__Class** type_info() {
            static app::BaurSelectedMemoryToReplayCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaurSelectedMemoryToReplayCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaurSelectedMemoryToReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::BaurSelectedMemoryToReplayCondition__Class>(type_info(), "", "BaurSelectedMemoryToReplayCondition");
        }
        inline app::BaurSelectedMemoryToReplayCondition* create() {
            return il2cpp::create_object<app::BaurSelectedMemoryToReplayCondition>(get_class());
        }
    } // namespace BaurSelectedMemoryToReplayCondition
} // namespace app::classes::types
