#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Water3Manager_CpuDisplacementModel__Enum {
        namespace {
            inline app::Water3Manager_CpuDisplacementModel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Water3Manager_CpuDisplacementModel__Enum__Class** type_info = &type_info_ref;
        inline app::Water3Manager_CpuDisplacementModel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Water3Manager_CpuDisplacementModel__Enum__Class>(type_info, "", "Water3Manager", "CpuDisplacementModel");
        }
        inline app::Water3Manager_CpuDisplacementModel__Enum* create() {
            return il2cpp::create_object<app::Water3Manager_CpuDisplacementModel__Enum>(get_class());
        }
    } // namespace Water3Manager_CpuDisplacementModel__Enum
} // namespace app::classes::types
