#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITask__Array {
        namespace {
            app::ITask__Array__Class* type_info_ref = nullptr;
        }
        app::ITask__Array__Class** type_info = &type_info_ref;
        inline app::ITask__Array__Class* get_class() {
            return il2cpp::get_class<app::ITask__Array__Class>(type_info, "Moon.BehaviourSystem", "ITask[]");
        }
        inline app::ITask__Array* create() {
            return il2cpp::create_object<app::ITask__Array>(get_class());
        }
    } // namespace ITask__Array
} // namespace app::classes::types
