#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController_KillType__Enum {
        namespace {
            inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController", "KillType");
        }
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController_KillType__Enum>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController_KillType__Enum
} // namespace app::classes::types
