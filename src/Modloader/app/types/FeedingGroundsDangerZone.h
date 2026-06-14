#pragma once
#include <Modloader/app/structs/FeedingGroundsDangerZone.h>
#include <Modloader/app/structs/FeedingGroundsDangerZone__Array.h>
#include <Modloader/app/structs/FeedingGroundsDangerZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsDangerZone {
        inline app::FeedingGroundsDangerZone__Class** type_info() {
            static app::FeedingGroundsDangerZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsDangerZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsDangerZone__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsDangerZone__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsDangerZone");
        }
        inline app::FeedingGroundsDangerZone* create() {
            return il2cpp::create_object<app::FeedingGroundsDangerZone>(get_class());
        }
        inline app::FeedingGroundsDangerZone__Array* create_array(int size) {
            return il2cpp::array_new<app::FeedingGroundsDangerZone__Array>(get_class(), size);
        }
        inline app::FeedingGroundsDangerZone__Array* create_array(const std::vector<app::FeedingGroundsDangerZone*>& items) {
            return il2cpp::array_new<app::FeedingGroundsDangerZone__Array>(get_class(), items);
        }
    } // namespace FeedingGroundsDangerZone
} // namespace app::classes::types
