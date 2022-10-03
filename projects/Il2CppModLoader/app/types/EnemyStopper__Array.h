#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyStopper__Array {
        namespace {
            app::EnemyStopper__Array__Class* type_info_ref = nullptr;
        }
        app::EnemyStopper__Array__Class** type_info = &type_info_ref;
        inline app::EnemyStopper__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyStopper__Array__Class>(type_info, "", "EnemyStopper[]");
        }
        inline app::EnemyStopper__Array* create() {
            return il2cpp::create_object<app::EnemyStopper__Array>(get_class());
        }
    } // namespace EnemyStopper__Array
} // namespace app::classes::types
