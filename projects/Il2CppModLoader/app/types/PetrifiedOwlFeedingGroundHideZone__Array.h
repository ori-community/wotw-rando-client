#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZone__Array {
        namespace {
            app::PetrifiedOwlFeedingGroundHideZone__Array__Class* type_info_ref = nullptr;
        }
        app::PetrifiedOwlFeedingGroundHideZone__Array__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFeedingGroundHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundHideZone__Array__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZone[]");
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZone__Array>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZone__Array
} // namespace app::classes::types
