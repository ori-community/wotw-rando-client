#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformRecorderData_Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransformRecorderData_Data__Class** type_info;
        inline app::TransformRecorderData_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformRecorderData_Data__Class>(type_info, "", "TransformRecorderData", "Data");
        }
        inline app::TransformRecorderData_Data* create() {
            return il2cpp::create_object<app::TransformRecorderData_Data>(get_class());
        }
        inline app::TransformRecorderData_Data__Array* create_array(int size) {
            return il2cpp::array_new<app::TransformRecorderData_Data__Array>(get_class(), size);
        }
        inline app::TransformRecorderData_Data__Array* create_array(const std::vector<app::TransformRecorderData_Data*>& items) {
            return il2cpp::array_new<app::TransformRecorderData_Data__Array>(get_class(), items);
        }
    } // namespace TransformRecorderData_Data
} // namespace app::classes::types
