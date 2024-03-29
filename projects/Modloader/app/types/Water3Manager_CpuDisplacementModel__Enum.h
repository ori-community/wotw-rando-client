#pragma once
#include <Modloader/app/structs/Water3Manager_CpuDisplacementModel__Enum.h>
#include <Modloader/app/structs/Water3Manager_CpuDisplacementModel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Water3Manager_CpuDisplacementModel__Enum {
        inline app::Water3Manager_CpuDisplacementModel__Enum__Class** type_info() {
            static app::Water3Manager_CpuDisplacementModel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Water3Manager_CpuDisplacementModel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Water3Manager_CpuDisplacementModel__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Water3Manager_CpuDisplacementModel__Enum__Class>(type_info(), "", "Water3Manager", "CpuDisplacementModel");
        }
        inline app::Water3Manager_CpuDisplacementModel__Enum* create() {
            return il2cpp::create_object<app::Water3Manager_CpuDisplacementModel__Enum>(get_class());
        }
    } // namespace Water3Manager_CpuDisplacementModel__Enum
} // namespace app::classes::types
