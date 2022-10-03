#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializedBooleanUberState__Array {
        namespace {
            app::SerializedBooleanUberState__Array__Class* type_info_ref = nullptr;
        }
        app::SerializedBooleanUberState__Array__Class** type_info = &type_info_ref;
        inline app::SerializedBooleanUberState__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializedBooleanUberState__Array__Class>(type_info, "Moon", "SerializedBooleanUberState[]");
        }
        inline app::SerializedBooleanUberState__Array* create() {
            return il2cpp::create_object<app::SerializedBooleanUberState__Array>(get_class());
        }
    } // namespace SerializedBooleanUberState__Array
} // namespace app::classes::types
