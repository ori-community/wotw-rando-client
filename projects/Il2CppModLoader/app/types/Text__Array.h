#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Text__Array {
        namespace {
            app::Text__Array__Class* type_info_ref = nullptr;
        }
        app::Text__Array__Class** type_info = &type_info_ref;
        inline app::Text__Array__Class* get_class() {
            return il2cpp::get_class<app::Text__Array__Class>(type_info, "UnityEngine.UI", "Text[]");
        }
        inline app::Text__Array* create() {
            return il2cpp::create_object<app::Text__Array>(get_class());
        }
    } // namespace Text__Array
} // namespace app::classes::types
