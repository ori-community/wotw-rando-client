#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTime {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTime__Class** type_info;
        inline app::DateTime__Class* get_class() {
            return il2cpp::get_class<app::DateTime__Class>(type_info, "System", "DateTime");
        }
        inline app::DateTime* create() {
            return il2cpp::create_object<app::DateTime>(get_class());
        }
        inline app::DateTime__Boxed* box(app::DateTime value) {
            return il2cpp::box_value<app::DateTime__Boxed>(get_class(), value);
        }
        inline app::DateTime__Array* create_array(int size) {
            return il2cpp::array_new<app::DateTime__Array>(get_class(), size);
        }
        inline app::DateTime__Array* create_array(const std::vector<app::DateTime__Boxed>& items) {
            return il2cpp::array_new<app::DateTime__Array>(get_class(), items);
        }
    } // namespace DateTime
} // namespace app::classes::types
