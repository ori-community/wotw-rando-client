#pragma once
#include <Modloader/app/structs/TransformRecorderData_Data.h>
#include <Modloader/app/structs/TransformRecorderData_Data__Array.h>
#include <Modloader/app/structs/TransformRecorderData_Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformRecorderData_Data {
        inline app::TransformRecorderData_Data__Class** type_info() {
            static app::TransformRecorderData_Data__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransformRecorderData_Data__Class**)(modloader::win::memory::resolve_rva(0x04771A40));
            }
            return cache;
        }
        inline app::TransformRecorderData_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformRecorderData_Data__Class>(type_info(), "", "TransformRecorderData", "Data");
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
