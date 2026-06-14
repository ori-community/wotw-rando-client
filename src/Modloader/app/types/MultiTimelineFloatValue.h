#pragma once
#include <Modloader/app/structs/MultiTimelineFloatValue.h>
#include <Modloader/app/structs/MultiTimelineFloatValue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiTimelineFloatValue {
        inline app::MultiTimelineFloatValue__Class** type_info() {
            static app::MultiTimelineFloatValue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiTimelineFloatValue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiTimelineFloatValue__Class* get_class() {
            return il2cpp::get_class<app::MultiTimelineFloatValue__Class>(type_info(), "", "MultiTimelineFloatValue");
        }
        inline app::MultiTimelineFloatValue* create() {
            return il2cpp::create_object<app::MultiTimelineFloatValue>(get_class());
        }
    } // namespace MultiTimelineFloatValue
} // namespace app::classes::types
