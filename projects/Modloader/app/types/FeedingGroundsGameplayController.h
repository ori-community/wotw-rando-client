#pragma once
#include <Modloader/app/structs/FeedingGroundsGameplayController.h>
#include <Modloader/app/structs/FeedingGroundsGameplayController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsGameplayController {
        inline app::FeedingGroundsGameplayController__Class** type_info() {
            static app::FeedingGroundsGameplayController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsGameplayController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsGameplayController__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsGameplayController__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsGameplayController");
        }
        inline app::FeedingGroundsGameplayController* create() {
            return il2cpp::create_object<app::FeedingGroundsGameplayController>(get_class());
        }
    } // namespace FeedingGroundsGameplayController
} // namespace app::classes::types
