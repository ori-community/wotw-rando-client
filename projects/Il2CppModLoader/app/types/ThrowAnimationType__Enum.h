#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThrowAnimationType__Enum {
        namespace {
            app::ThrowAnimationType__Enum__Class* type_info_ref = nullptr;
        }
        app::ThrowAnimationType__Enum__Class** type_info = &type_info_ref;
        inline app::ThrowAnimationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ThrowAnimationType__Enum__Class>(type_info, "Moon", "ThrowAnimationType");
        }
        inline app::ThrowAnimationType__Enum* create() {
            return il2cpp::create_object<app::ThrowAnimationType__Enum>(get_class());
        }
        inline app::ThrowAnimationType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ThrowAnimationType__Enum__Array>(get_class(), size);
        }
    } // namespace ThrowAnimationType__Enum
} // namespace app::classes::types
