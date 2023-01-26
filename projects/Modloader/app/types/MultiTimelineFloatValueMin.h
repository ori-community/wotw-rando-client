#pragma once
#include <Modloader/app/structs/MultiTimelineFloatValueMin.h>
#include <Modloader/app/structs/MultiTimelineFloatValueMin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValueMin {
        inline app::MultiTimelineFloatValueMin__Class** type_info() {
            static app::MultiTimelineFloatValueMin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiTimelineFloatValueMin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiTimelineFloatValueMin__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValueMin__Class>(type_info(), "", "MultiTimelineFloatValueMin");
        }
        inline app::MultiTimelineFloatValueMin* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValueMin>(get_class());
        }
    } // namespace MultiTimelineFloatValueMin
} // namespace app::classes::types
