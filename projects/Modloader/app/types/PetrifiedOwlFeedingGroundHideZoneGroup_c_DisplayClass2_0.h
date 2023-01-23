#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0 {
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class** type_info = (app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x047853D8));
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZoneGroup", "<>c__DisplayClass2_0");
        }
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZoneGroup_c_DisplayClass2_0
} // namespace app::classes::types
