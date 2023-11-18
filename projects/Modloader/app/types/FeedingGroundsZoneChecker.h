#pragma once
#include <Modloader/app/structs/FeedingGroundsZoneChecker.h>
#include <Modloader/app/structs/FeedingGroundsZoneChecker__Array.h>
#include <Modloader/app/structs/FeedingGroundsZoneChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsZoneChecker {
        inline app::FeedingGroundsZoneChecker__Class** type_info() {
            static app::FeedingGroundsZoneChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsZoneChecker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsZoneChecker__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsZoneChecker");
        }
        inline app::FeedingGroundsZoneChecker* create() {
            return il2cpp::create_object<app::FeedingGroundsZoneChecker>(get_class());
        }
        inline app::FeedingGroundsZoneChecker__Array* create_array(int size) {
            return il2cpp::array_new<app::FeedingGroundsZoneChecker__Array>(get_class(), size);
        }
        inline app::FeedingGroundsZoneChecker__Array* create_array(const std::vector<app::FeedingGroundsZoneChecker*>& items) {
            return il2cpp::array_new<app::FeedingGroundsZoneChecker__Array>(get_class(), items);
        }
    } // namespace FeedingGroundsZoneChecker
} // namespace app::classes::types
