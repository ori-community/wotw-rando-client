#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyStruct {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyStruct__Class** type_info;
        inline app::EmptyStruct__Class* get_class() {
            return il2cpp::get_class<app::EmptyStruct__Class>(type_info, "System.Diagnostics.Tracing", "EmptyStruct");
        }
        inline app::EmptyStruct* create() {
            return il2cpp::create_object<app::EmptyStruct>(get_class());
        }
        inline app::EmptyStruct__Boxed* box(app::EmptyStruct value) {
            return il2cpp::box_value<app::EmptyStruct__Boxed>(get_class(), value);
        }
    } // namespace EmptyStruct
} // namespace app::classes::types
