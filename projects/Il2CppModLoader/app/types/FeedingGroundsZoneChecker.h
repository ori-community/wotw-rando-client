#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsZoneChecker {
        namespace {
            app::FeedingGroundsZoneChecker__Class* type_info_ref = nullptr;
        }
        app::FeedingGroundsZoneChecker__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsZoneChecker__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsZoneChecker__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsZoneChecker");
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
