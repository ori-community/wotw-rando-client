#pragma once
#include <Modloader/app/structs/FeedingGroundsDangerZone__Array.h>
#include <Modloader/app/structs/FeedingGroundsDangerZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsDangerZone__Array {
        inline app::FeedingGroundsDangerZone__Array__Class** type_info() {
            static app::FeedingGroundsDangerZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsDangerZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsDangerZone__Array__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsDangerZone__Array__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsDangerZone[]");
        }
        inline app::FeedingGroundsDangerZone__Array* create() {
            return il2cpp::create_object<app::FeedingGroundsDangerZone__Array>(get_class());
        }
    } // namespace FeedingGroundsDangerZone__Array
} // namespace app::classes::types
