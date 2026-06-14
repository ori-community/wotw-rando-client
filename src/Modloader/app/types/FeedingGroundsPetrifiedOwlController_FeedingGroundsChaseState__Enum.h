#pragma once
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum.h>
#include <Modloader/app/structs/FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum {
        inline app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class** type_info() {
            static app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04761F68));
            }
            return cache;
        }
        inline app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController", "FeedingGroundsChaseState");
        }
        inline app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum
} // namespace app::classes::types
