#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FeedingGroundsDangerEffect {
        namespace {
            app::FeedingGroundsDangerEffect__Class* type_info_ref = nullptr;
        }
        app::FeedingGroundsDangerEffect__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsDangerEffect__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsDangerEffect__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsDangerEffect");
        }
        inline app::FeedingGroundsDangerEffect* create() {
            return il2cpp::create_object<app::FeedingGroundsDangerEffect>(get_class());
        }
    } // namespace FeedingGroundsDangerEffect
} // namespace app::classes::types
