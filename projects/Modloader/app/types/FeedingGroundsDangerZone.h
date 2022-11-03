#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FeedingGroundsDangerZone {
        namespace {
            inline app::FeedingGroundsDangerZone__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsDangerZone__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsDangerZone__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsDangerZone__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsDangerZone");
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
