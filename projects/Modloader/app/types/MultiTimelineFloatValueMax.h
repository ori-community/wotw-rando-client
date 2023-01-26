#pragma once
#include <Modloader/app/structs/MultiTimelineFloatValueMax.h>
#include <Modloader/app/structs/MultiTimelineFloatValueMax__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValueMax {
        inline app::MultiTimelineFloatValueMax__Class** type_info() {
            static app::MultiTimelineFloatValueMax__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiTimelineFloatValueMax__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiTimelineFloatValueMax__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValueMax__Class>(type_info(), "", "MultiTimelineFloatValueMax");
        }
        inline app::MultiTimelineFloatValueMax* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValueMax>(get_class());
        }
    } // namespace MultiTimelineFloatValueMax
} // namespace app::classes::types
