#pragma once
#include <Modloader/app/structs/TriggerBasedRubberBanding__Array.h>
#include <Modloader/app/structs/TriggerBasedRubberBanding__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerBasedRubberBanding__Array {
        inline app::TriggerBasedRubberBanding__Array__Class** type_info() {
            static app::TriggerBasedRubberBanding__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerBasedRubberBanding__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerBasedRubberBanding__Array__Class* get_class() {
            return il2cpp::get_class<app::TriggerBasedRubberBanding__Array__Class>(type_info(), "", "TriggerBasedRubberBanding[]");
        }
        inline app::TriggerBasedRubberBanding__Array* create() {
            return il2cpp::create_object<app::TriggerBasedRubberBanding__Array>(get_class());
        }
    } // namespace TriggerBasedRubberBanding__Array
} // namespace app::classes::types
