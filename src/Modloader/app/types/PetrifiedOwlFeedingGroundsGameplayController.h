#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsGameplayController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundsGameplayController {
        inline app::PetrifiedOwlFeedingGroundsGameplayController__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundsGameplayController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundsGameplayController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundsGameplayController__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundsGameplayController");
        }
        inline app::PetrifiedOwlFeedingGroundsGameplayController* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundsGameplayController>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundsGameplayController
} // namespace app::classes::types
