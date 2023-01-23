#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CanRestartLoremasterReplayCondition__Class.h>
#include <Modloader/app/structs/CanRestartLoremasterReplayCondition.h>

namespace app::classes::types {
    namespace CanRestartLoremasterReplayCondition {
        namespace {
            inline app::CanRestartLoremasterReplayCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanRestartLoremasterReplayCondition__Class** type_info = &type_info_ref;
        inline app::CanRestartLoremasterReplayCondition__Class* get_class() {
            return il2cpp::get_class<app::CanRestartLoremasterReplayCondition__Class>(type_info, "", "CanRestartLoremasterReplayCondition");
        }
        inline app::CanRestartLoremasterReplayCondition* create() {
            return il2cpp::create_object<app::CanRestartLoremasterReplayCondition>(get_class());
        }
    } // namespace CanRestartLoremasterReplayCondition
} // namespace app::classes::types
