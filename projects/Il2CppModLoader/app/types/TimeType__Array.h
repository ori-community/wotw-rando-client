#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeType__Array {
        namespace {
            app::TimeType__Array__Class* type_info_ref = nullptr;
        }
        app::TimeType__Array__Class** type_info = &type_info_ref;
        inline app::TimeType__Array__Class* get_class() {
            return il2cpp::get_class<app::TimeType__Array__Class>(type_info, "System", "TimeType[]");
        }
        inline app::TimeType__Array* create() {
            return il2cpp::create_object<app::TimeType__Array>(get_class());
        }
    } // namespace TimeType__Array
} // namespace app::classes::types
