#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZoneGroup {
        namespace {
            inline app::PetrifiedOwlFeedingGroundHideZoneGroup__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundHideZoneGroup__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZoneGroup");
        }
        inline app::PetrifiedOwlFeedingGroundHideZoneGroup* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZoneGroup>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZoneGroup
} // namespace app::classes::types
