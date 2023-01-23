#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsWatchingCutsceneCondition__Class.h>
#include <Modloader/app/structs/IsWatchingCutsceneCondition.h>

namespace app::classes::types {
    namespace IsWatchingCutsceneCondition {
        namespace {
            inline app::IsWatchingCutsceneCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsWatchingCutsceneCondition__Class** type_info = &type_info_ref;
        inline app::IsWatchingCutsceneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWatchingCutsceneCondition__Class>(type_info, "", "IsWatchingCutsceneCondition");
        }
        inline app::IsWatchingCutsceneCondition* create() {
            return il2cpp::create_object<app::IsWatchingCutsceneCondition>(get_class());
        }
    } // namespace IsWatchingCutsceneCondition
} // namespace app::classes::types
