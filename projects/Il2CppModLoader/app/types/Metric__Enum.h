#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Metric__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Metric__Enum__Class** type_info;
        inline app::Metric__Enum__Class* get_class() {
            return il2cpp::get_class<app::Metric__Enum__Class>(type_info, "Moon.Profile", "Metric");
        }
        inline app::Metric__Enum* create() {
            return il2cpp::create_object<app::Metric__Enum>(get_class());
        }
        inline app::Metric__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Metric__Enum__Array>(get_class(), size);
        }
        inline app::Metric__Enum__Array* create_array(const std::vector<app::Metric__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::Metric__Enum__Array>(get_class(), items);
        }
    } // namespace Metric__Enum
} // namespace app::classes::types
