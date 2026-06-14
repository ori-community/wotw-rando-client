#pragma once
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_KillType__Enum.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_KillType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController_KillType__Enum {
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class** type_info() {
            static app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController", "KillType");
        }
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController_KillType__Enum>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController_KillType__Enum
} // namespace app::classes::types
