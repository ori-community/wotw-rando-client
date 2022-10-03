#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector2Ser__Array {
        namespace {
            app::Vector2Ser__Array__Class* type_info_ref = nullptr;
        }
        app::Vector2Ser__Array__Class** type_info = &type_info_ref;
        inline app::Vector2Ser__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector2Ser__Array__Class>(type_info, "", "Vector2Ser[]");
        }
        inline app::Vector2Ser__Array* create() {
            return il2cpp::create_object<app::Vector2Ser__Array>(get_class());
        }
    } // namespace Vector2Ser__Array
} // namespace app::classes::types
