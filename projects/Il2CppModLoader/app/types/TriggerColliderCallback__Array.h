#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerColliderCallback__Array {
        namespace {
            app::TriggerColliderCallback__Array__Class* type_info_ref = nullptr;
        }
        app::TriggerColliderCallback__Array__Class** type_info = &type_info_ref;
        inline app::TriggerColliderCallback__Array__Class* get_class() {
            return il2cpp::get_class<app::TriggerColliderCallback__Array__Class>(type_info, "", "TriggerColliderCallback[]");
        }
        inline app::TriggerColliderCallback__Array* create() {
            return il2cpp::create_object<app::TriggerColliderCallback__Array>(get_class());
        }
    } // namespace TriggerColliderCallback__Array
} // namespace app::classes::types
