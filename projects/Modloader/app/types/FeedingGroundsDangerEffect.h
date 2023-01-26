#pragma once
#include <Modloader/app/structs/FeedingGroundsDangerEffect.h>
#include <Modloader/app/structs/FeedingGroundsDangerEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsDangerEffect {
        inline app::FeedingGroundsDangerEffect__Class** type_info() {
            static app::FeedingGroundsDangerEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FeedingGroundsDangerEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FeedingGroundsDangerEffect__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsDangerEffect__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "FeedingGroundsDangerEffect");
        }
        inline app::FeedingGroundsDangerEffect* create() {
            return il2cpp::create_object<app::FeedingGroundsDangerEffect>(get_class());
        }
    } // namespace FeedingGroundsDangerEffect
} // namespace app::classes::types
