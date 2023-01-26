#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsPOwlController {
        inline app::PetrifiedOwlFeedingGroundsPOwlController__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundsPOwlController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundsPOwlController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundsPOwlController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsPOwlController__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsPOwlController");
        }
        inline app::PetrifiedOwlFeedingGroundsPOwlController* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsPOwlController>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsPOwlController
} // namespace app::classes::types
