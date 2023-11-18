#pragma once
#include <Modloader/app/structs/DrivenRectTransformTracker.h>
#include <Modloader/app/structs/DrivenRectTransformTracker__Boxed.h>
#include <Modloader/app/structs/DrivenRectTransformTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivenRectTransformTracker {
        inline app::DrivenRectTransformTracker__Class** type_info() {
            static app::DrivenRectTransformTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrivenRectTransformTracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrivenRectTransformTracker__Class* get_class() {
            return il2cpp::get_class<app::DrivenRectTransformTracker__Class>(type_info(), "UnityEngine", "DrivenRectTransformTracker");
        }
        inline app::DrivenRectTransformTracker* create() {
            return il2cpp::create_object<app::DrivenRectTransformTracker>(get_class());
        }
        inline app::DrivenRectTransformTracker__Boxed* box(app::DrivenRectTransformTracker value) {
            return il2cpp::box_value<app::DrivenRectTransformTracker__Boxed>(get_class(), value);
        }
    } // namespace DrivenRectTransformTracker
} // namespace app::classes::types
