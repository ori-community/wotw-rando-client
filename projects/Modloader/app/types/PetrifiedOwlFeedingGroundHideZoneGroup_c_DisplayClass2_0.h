#pragma once
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0 {
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class** type_info() {
            static app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x047853D8));
            }
            return cache;
        }
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class>(type_info(), "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZoneGroup", "<>c__DisplayClass2_0");
        }
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0
} // namespace app::classes::types
