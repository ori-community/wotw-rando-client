#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FeedingGroundsDangerEffect__Class.h>
#include <Modloader/app/structs/FeedingGroundsDangerEffect.h>

namespace app::classes::types {
    namespace FeedingGroundsDangerEffect {
        namespace {
            inline app::FeedingGroundsDangerEffect__Class* type_info_ref = nullptr;
        }
        inline app::FeedingGroundsDangerEffect__Class** type_info = &type_info_ref;
        inline app::FeedingGroundsDangerEffect__Class* get_class() {
            return il2cpp::get_class<app::FeedingGroundsDangerEffect__Class>(type_info, "PetrifiedOwlFeedingGrounds", "FeedingGroundsDangerEffect");
        }
        inline app::FeedingGroundsDangerEffect* create() {
            return il2cpp::create_object<app::FeedingGroundsDangerEffect>(get_class());
        }
    } // namespace FeedingGroundsDangerEffect
} // namespace app::classes::types
