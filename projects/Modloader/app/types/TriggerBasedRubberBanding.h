#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerBasedRubberBanding {
        namespace {
            inline app::TriggerBasedRubberBanding__Class* type_info_ref = nullptr;
        }
        inline app::TriggerBasedRubberBanding__Class** type_info = &type_info_ref;
        inline app::TriggerBasedRubberBanding__Class* get_class() {
            return il2cpp::get_class<app::TriggerBasedRubberBanding__Class>(type_info, "", "TriggerBasedRubberBanding");
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
