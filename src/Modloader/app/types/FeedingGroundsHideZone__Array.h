#pragma once
#include <Modloader/app/structs/FeedingGroundsHideZone__Array.h>
#include <Modloader/app/structs/FeedingGroundsHideZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsHideZone__Array {
        inline app::FeedingGroundsHideZone__Array__Class** type_info() {
            static app::FeedingGroundsHideZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsHideZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsHideZone__Array__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsHideZone[]");
        }
        inline app::FeedingGroundsHideZone__Array* create() {
            return il2cpp::create_object<app::FeedingGroundsHideZone__Array>(get_class());
        }
    } // namespace FeedingGroundsHideZone__Array
} // namespace app::classes::types
