#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum {
        inline app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum__Class** type_info = (app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04787F18));
        inline app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsPOwlController", "PetrifiedOwlFeedingGroundsPOwlState");
        }
        inline app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum
} // namespace app::classes::types
