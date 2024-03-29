#pragma once
#include <Modloader/app/structs/FeedingGroundsHideZone.h>
#include <Modloader/app/structs/FeedingGroundsHideZone__Array.h>
#include <Modloader/app/structs/FeedingGroundsHideZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsHideZone {
        inline app::FeedingGroundsHideZone__Class** type_info() {
            static app::FeedingGroundsHideZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsHideZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsHideZone__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsHideZone__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsHideZone");
        }
        inline app::FeedingGroundsHideZone* create() {
            return il2cpp::create_object<app::FeedingGroundsHideZone>(get_class());
        }
        inline app::FeedingGroundsHideZone__Array* create_array(int size) {
            return il2cpp::array_new<app::FeedingGroundsHideZone__Array>(get_class(), size);
        }
        inline app::FeedingGroundsHideZone__Array* create_array(const std::vector<app::FeedingGroundsHideZone*>& items) {
            return il2cpp::array_new<app::FeedingGroundsHideZone__Array>(get_class(), items);
        }
    } // namespace FeedingGroundsHideZone
} // namespace app::classes::types
