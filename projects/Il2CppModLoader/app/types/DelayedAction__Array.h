#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayedAction__Array {
        namespace {
            app::DelayedAction__Array__Class* type_info_ref = nullptr;
        }
        app::DelayedAction__Array__Class** type_info = &type_info_ref;
        inline app::DelayedAction__Array__Class* get_class() {
            return il2cpp::get_class<app::DelayedAction__Array__Class>(type_info, "", "DelayedAction[]");
        }
        inline app::DelayedAction__Array* create() {
            return il2cpp::create_object<app::DelayedAction__Array>(get_class());
        }
    } // namespace DelayedAction__Array
} // namespace app::classes::types
