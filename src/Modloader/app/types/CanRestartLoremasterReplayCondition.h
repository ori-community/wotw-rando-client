#pragma once
#include <Modloader/app/structs/CanRestartLoremasterReplayCondition.h>
#include <Modloader/app/structs/CanRestartLoremasterReplayCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanRestartLoremasterReplayCondition {
        inline app::CanRestartLoremasterReplayCondition__Class** type_info() {
            static app::CanRestartLoremasterReplayCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanRestartLoremasterReplayCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanRestartLoremasterReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::CanRestartLoremasterReplayCondition__Class>(type_info(), "", "CanRestartLoremasterReplayCondition");
        }
        inline app::CanRestartLoremasterReplayCondition* create() {
            return il2cpp::create_object<app::CanRestartLoremasterReplayCondition>(get_class());
        }
    } // namespace CanRestartLoremasterReplayCondition
} // namespace app::classes::types
