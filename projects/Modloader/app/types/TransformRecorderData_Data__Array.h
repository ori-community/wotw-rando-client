#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformRecorderData_Data__Array__Class.h>
#include <Modloader/app/structs/TransformRecorderData_Data__Array.h>

namespace app::classes::types {
    namespace TransformRecorderData_Data__Array {
        namespace {
            inline app::TransformRecorderData_Data__Array__Class* type_info_ref = nullptr;
        }
        inline app::TransformRecorderData_Data__Array__Class** type_info = &type_info_ref;
        inline app::TransformRecorderData_Data__Array__Class* get_class() {
            return il2cpp::get_class<app::TransformRecorderData_Data__Array__Class>(type_info, "", "TransformRecorderData+Data[]");
        }
        inline app::TransformRecorderData_Data__Array* create() {
            return il2cpp::create_object<app::TransformRecorderData_Data__Array>(get_class());
        }
    } // namespace TransformRecorderData_Data__Array
} // namespace app::classes::types
