#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerBasedRubberBanding__Array {
        namespace {
            app::TriggerBasedRubberBanding__Array__Class* type_info_ref = nullptr;
        }
        app::TriggerBasedRubberBanding__Array__Class** type_info = &type_info_ref;
        inline app::TriggerBasedRubberBanding__Array__Class* get_class() {
            return il2cpp::get_class<app::TriggerBasedRubberBanding__Array__Class>(type_info, "", "TriggerBasedRubberBanding[]");
        }
        inline app::TriggerBasedRubberBanding__Array* create() {
            return il2cpp::create_object<app::TriggerBasedRubberBanding__Array>(get_class());
        }
    } // namespace TriggerBasedRubberBanding__Array
} // namespace app::classes::types
