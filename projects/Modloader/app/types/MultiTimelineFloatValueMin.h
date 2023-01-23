#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiTimelineFloatValueMin__Class.h>
#include <Modloader/app/structs/MultiTimelineFloatValueMin.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValueMin {
        namespace {
            inline app::MultiTimelineFloatValueMin__Class* type_info_ref = nullptr;
        }
        inline app::MultiTimelineFloatValueMin__Class** type_info = &type_info_ref;
        inline app::MultiTimelineFloatValueMin__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValueMin__Class>(type_info, "", "MultiTimelineFloatValueMin");
        }
        inline app::MultiTimelineFloatValueMin* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValueMin>(get_class());
        }
    } // namespace MultiTimelineFloatValueMin
} // namespace app::classes::types
