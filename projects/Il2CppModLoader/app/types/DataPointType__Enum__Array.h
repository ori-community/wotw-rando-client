#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataPointType__Enum__Array {
        namespace {
            inline app::DataPointType__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::DataPointType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::DataPointType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::DataPointType__Enum__Array__Class>(type_info, "", "DataPointType[]");
        }
        inline app::DataPointType__Enum__Array* create() {
            return il2cpp::create_object<app::DataPointType__Enum__Array>(get_class());
        }
    } // namespace DataPointType__Enum__Array
} // namespace app::classes::types
