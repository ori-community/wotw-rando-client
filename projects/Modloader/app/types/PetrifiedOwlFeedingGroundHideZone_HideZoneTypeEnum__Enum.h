#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum {
        inline app::PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZone", "HideZoneTypeEnum");
        }
        inline app::PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZone_HideZoneTypeEnum__Enum
} // namespace app::classes::types
