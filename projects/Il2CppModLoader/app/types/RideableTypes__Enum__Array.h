#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RideableTypes__Enum__Array {
        namespace {
            app::RideableTypes__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::RideableTypes__Enum__Array__Class** type_info = &type_info_ref;
        inline app::RideableTypes__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::RideableTypes__Enum__Array__Class>(type_info, "", "RideableTypes[]");
        }
        inline app::RideableTypes__Enum__Array* create() {
            return il2cpp::create_object<app::RideableTypes__Enum__Array>(get_class());
        }
    } // namespace RideableTypes__Enum__Array
} // namespace app::classes::types
