#pragma once
#include <Modloader/app/structs/MultiTimelineFloatValueMultiply.h>
#include <Modloader/app/structs/MultiTimelineFloatValueMultiply__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValueMultiply {
        inline app::MultiTimelineFloatValueMultiply__Class** type_info() {
            static app::MultiTimelineFloatValueMultiply__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiTimelineFloatValueMultiply__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiTimelineFloatValueMultiply__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValueMultiply__Class>(type_info(), "", "MultiTimelineFloatValueMultiply");
        }
        inline app::MultiTimelineFloatValueMultiply* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValueMultiply>(get_class());
        }
    } // namespace MultiTimelineFloatValueMultiply
} // namespace app::classes::types
