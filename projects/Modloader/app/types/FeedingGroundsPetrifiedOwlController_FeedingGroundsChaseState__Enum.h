#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum {
        inline app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class** type_info = (app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04761F68));
        inline app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsPetrifiedOwlController", "FeedingGroundsChaseState");
        }
        inline app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum* create() {
            return il2cpp::create_object<app::FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum>(get_class());
        }
    } // namespace FeedingGroundsPetrifiedOwlController_FeedingGroundsChaseState__Enum
} // namespace app::classes::types
