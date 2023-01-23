#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayMoonTimelineOnCondition__Class.h>
#include <Modloader/app/structs/PlayMoonTimelineOnCondition.h>

namespace app::classes::types {
    namespace PlayMoonTimelineOnCondition {
        namespace {
            inline app::PlayMoonTimelineOnCondition__Class* type_info_ref = nullptr;
        }
        inline app::PlayMoonTimelineOnCondition__Class** type_info = &type_info_ref;
        inline app::PlayMoonTimelineOnCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayMoonTimelineOnCondition__Class>(type_info, "", "PlayMoonTimelineOnCondition");
        }
        inline app::PlayMoonTimelineOnCondition* create() {
            return il2cpp::create_object<app::PlayMoonTimelineOnCondition>(get_class());
        }
    } // namespace PlayMoonTimelineOnCondition
} // namespace app::classes::types
