#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsPOwlController {
        namespace {
            app::PetrifiedOwlFeedingGroundsPOwlController__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlFeedingGroundsPOwlController__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFeedingGroundsPOwlController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsPOwlController__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsPOwlController");
        }
        inline app::PetrifiedOwlFeedingGroundsPOwlController* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsPOwlController>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsPOwlController
} // namespace app::classes::types
