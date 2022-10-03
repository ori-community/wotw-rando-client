#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpan {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSpan__Class** type_info;
        inline app::TimeSpan__Class* get_class() {
            return il2cpp::get_class<app::TimeSpan__Class>(type_info, "System", "TimeSpan");
        }
        inline app::TimeSpan* create() {
            return il2cpp::create_object<app::TimeSpan>(get_class());
        }
        inline app::TimeSpan__Boxed* box(app::TimeSpan value) {
            return il2cpp::box_value<app::TimeSpan__Boxed>(get_class(), value);
        }
        inline app::TimeSpan__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeSpan__Array>(get_class(), size);
        }
    } // namespace TimeSpan
} // namespace app::classes::types
