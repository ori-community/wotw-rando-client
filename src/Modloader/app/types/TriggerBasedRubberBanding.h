#pragma once
#include <Modloader/app/structs/TriggerBasedRubberBanding.h>
#include <Modloader/app/structs/TriggerBasedRubberBanding__Array.h>
#include <Modloader/app/structs/TriggerBasedRubberBanding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerBasedRubberBanding {
        inline app::TriggerBasedRubberBanding__Class** type_info() {
            static app::TriggerBasedRubberBanding__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerBasedRubberBanding__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerBasedRubberBanding__Class* get_class() {
            return il2cpp::get_class<app::TriggerBasedRubberBanding__Class>(type_info(), "", "TriggerBasedRubberBanding");
        }
        inline app::TriggerBasedRubberBanding* create() {
            return il2cpp::create_object<app::TriggerBasedRubberBanding>(get_class());
        }
        inline app::TriggerBasedRubberBanding__Array* create_array(int size) {
            return il2cpp::array_new<app::TriggerBasedRubberBanding__Array>(get_class(), size);
        }
        inline app::TriggerBasedRubberBanding__Array* create_array(const std::vector<app::TriggerBasedRubberBanding*>& items) {
            return il2cpp::array_new<app::TriggerBasedRubberBanding__Array>(get_class(), items);
        }
    } // namespace TriggerBasedRubberBanding
} // namespace app::classes::types
