#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeSceneMetaData_PositionTypes__Enum {
        namespace {
            inline app::RuntimeSceneMetaData_PositionTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeSceneMetaData_PositionTypes__Enum__Class** type_info = &type_info_ref;
        inline app::RuntimeSceneMetaData_PositionTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeSceneMetaData_PositionTypes__Enum__Class>(type_info, "", "RuntimeSceneMetaData", "PositionTypes");
        }
        inline app::RuntimeSceneMetaData_PositionTypes__Enum* create() {
            return il2cpp::create_object<app::RuntimeSceneMetaData_PositionTypes__Enum>(get_class());
        }
    } // namespace RuntimeSceneMetaData_PositionTypes__Enum
} // namespace app::classes::types
