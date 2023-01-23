#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LineMesh_UVModeType__Enum__Class.h>
#include <Modloader/app/structs/LineMesh_UVModeType__Enum.h>

namespace app::classes::types {
    namespace LineMesh_UVModeType__Enum {
        namespace {
            inline app::LineMesh_UVModeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LineMesh_UVModeType__Enum__Class** type_info = &type_info_ref;
        inline app::LineMesh_UVModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LineMesh_UVModeType__Enum__Class>(type_info, "", "LineMesh", "UVModeType");
        }
        inline app::LineMesh_UVModeType__Enum* create() {
            return il2cpp::create_object<app::LineMesh_UVModeType__Enum>(get_class());
        }
    } // namespace LineMesh_UVModeType__Enum
} // namespace app::classes::types
