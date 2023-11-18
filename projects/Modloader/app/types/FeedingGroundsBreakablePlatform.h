#pragma once
#include <Modloader/app/structs/FeedingGroundsBreakablePlatform.h>
#include <Modloader/app/structs/FeedingGroundsBreakablePlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsBreakablePlatform {
        inline app::FeedingGroundsBreakablePlatform__Class** type_info() {
            static app::FeedingGroundsBreakablePlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsBreakablePlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsBreakablePlatform__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsBreakablePlatform__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsBreakablePlatform");
        }
        inline app::FeedingGroundsBreakablePlatform* create() {
            return il2cpp::create_object<app::FeedingGroundsBreakablePlatform>(get_class());
        }
    } // namespace FeedingGroundsBreakablePlatform
} // namespace app::classes::types
