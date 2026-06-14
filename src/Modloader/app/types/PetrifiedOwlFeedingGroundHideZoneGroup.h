#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZoneGroup {
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundHideZoneGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundHideZoneGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundHideZoneGroup__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZoneGroup");
        }
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZoneGroup>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZoneGroup
} // namespace app::classes::types
