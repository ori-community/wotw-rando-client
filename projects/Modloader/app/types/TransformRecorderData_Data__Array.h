#pragma once
#include <Modloader/app/structs/TransformRecorderData_Data__Array.h>
#include <Modloader/app/structs/TransformRecorderData_Data__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformRecorderData_Data__Array {
        inline app::TransformRecorderData_Data__Array__Class** type_info() {
            static app::TransformRecorderData_Data__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformRecorderData_Data__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformRecorderData_Data__Array__Class* get_class() {
            return il2cpp::get_class<app::TransformRecorderData_Data__Array__Class>(type_info(), "", "TransformRecorderData+Data[]");
        }
        inline app::TransformRecorderData_Data__Array* create() {
            return il2cpp::create_object<app::TransformRecorderData_Data__Array>(get_class());
        }
    } // namespace TransformRecorderData_Data__Array
} // namespace app::classes::types
