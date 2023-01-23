#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone__Array__Class.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone__Array.h>

namespace app::classes::types {
    namespace PetrifiedOwlFeedingGroundHideZone__Array {
        namespace {
            inline app::PetrifiedOwlFeedingGroundHideZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Array__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlFeedingGroundHideZone__Array__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlFeedingGroundHideZone__Array__Class>(type_info, "PetrifiedOwlFeedingGrounds", "PetrifiedOwlFeedingGroundHideZone[]");
        }
        inline app::PetrifiedOwlFeedingGroundHideZone__Array* create() {
            return il2cpp::create_object<app::PetrifiedOwlFeedingGroundHideZone__Array>(get_class());
        }
    } // namespace PetrifiedOwlFeedingGroundHideZone__Array
} // namespace app::classes::types
