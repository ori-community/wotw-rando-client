#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone__Array.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZone__Array {
        inline app::PetrifiedOwlFeedingGroundHideZone__Array__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundHideZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundHideZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundHideZone__Array__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZone[]");
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZone__Array>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZone__Array
} // namespace app::classes::types
