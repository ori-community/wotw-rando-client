#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonBuilder__Array {
        namespace {
            inline app::JsonBuilder__Array__Class* type_info_ref = nullptr;
        }
        inline app::JsonBuilder__Array__Class** type_info = &type_info_ref;
        inline app::JsonBuilder__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonBuilder__Array__Class>(type_info, "Moon", "JsonBuilder[]");
        }
        inline app::JsonBuilder__Array* create() {
            return il2cpp::create_object<app::JsonBuilder__Array>(get_class());
        }
    } // namespace JsonBuilder__Array
} // namespace app::classes::types
