#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone__Array.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZone {
        inline app::PetrifiedOwlFeedingGroundHideZone__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundHideZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlFeedingGroundHideZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundHideZone__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZone");
        }
        inline app::PetrifiedOwlFeedingGroundHideZone* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZone>(get_class());
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Array* create_array(int size) {
            return il2cpp::array_new<app::PetrifiedOwlFeedingGroundHideZone__Array>(get_class(), size);
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Array* create_array(const std::vector<app::PetrifiedOwlFeedingGroundHideZone*>& items) {
            return il2cpp::array_new<app::PetrifiedOwlFeedingGroundHideZone__Array>(get_class(), items);
        }
    } // namespace PetrifiedOwlFeedingGroundHideZone
} // namespace app::classes::types
