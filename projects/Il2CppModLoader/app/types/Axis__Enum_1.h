#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Axis__Enum_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Axis__Enum_1__Class** type_info;
        inline app::Axis__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::Axis__Enum_1__Class>(type_info, "frameworks.Switch", "Axis");
        }
        inline app::Axis__Enum_1* create() {
            return il2cpp::create_object<app::Axis__Enum_1>(get_class());
        }
        inline app::Axis__Enum_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Axis__Enum_1__Array>(get_class(), size);
        }
        inline app::Axis__Enum_1__Array* create_array(const std::vector<app::Axis__Enum_1*>& items) {
            return il2cpp::array_new<app::Axis__Enum_1__Array>(get_class(), items);
        }
    } // namespace Axis__Enum_1
} // namespace app::classes::types
