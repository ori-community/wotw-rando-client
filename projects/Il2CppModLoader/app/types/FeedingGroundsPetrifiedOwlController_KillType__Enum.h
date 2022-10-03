#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController_KillType__Enum {
        namespace {
            app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class* type_info_ref = nullptr;
        }
        app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FeedingGroundsPetrifiedOwlController_KillType__Enum__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController", "KillType");
        }
        inline app::FeedingGroundsPetrifiedOwlController_KillType__Enum* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController_KillType__Enum>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController_KillType__Enum
} // namespace app::classes::types
