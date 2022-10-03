#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Marker__Enum__Array {
        namespace {
            app::Marker__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::Marker__Enum__Array__Class** type_info = &type_info_ref;
        inline app::Marker__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Marker__Enum__Array__Class>(type_info, "Moon.Profile", "Marker[]");
        }
        inline app::Marker__Enum__Array* create() {
            return il2cpp::create_object<app::Marker__Enum__Array>(get_class());
        }
    } // namespace Marker__Enum__Array
} // namespace app::classes::types
