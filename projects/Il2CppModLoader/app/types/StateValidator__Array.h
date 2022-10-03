#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateValidator__Array {
        namespace {
            app::StateValidator__Array__Class* type_info_ref = nullptr;
        }
        app::StateValidator__Array__Class** type_info = &type_info_ref;
        inline app::StateValidator__Array__Class* get_class() {
            return il2cpp::get_class<app::StateValidator__Array__Class>(type_info, "", "StateValidator[]");
        }
        inline app::StateValidator__Array* create() {
            return il2cpp::create_object<app::StateValidator__Array>(get_class());
        }
    } // namespace StateValidator__Array
} // namespace app::classes::types
