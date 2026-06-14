#pragma once
#include <Modloader/app/structs/RuntimeSceneMetaData_PositionTypes__Enum.h>
#include <Modloader/app/structs/RuntimeSceneMetaData_PositionTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeSceneMetaData_PositionTypes__Enum {
        inline app::RuntimeSceneMetaData_PositionTypes__Enum__Class** type_info() {
            static app::RuntimeSceneMetaData_PositionTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeSceneMetaData_PositionTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeSceneMetaData_PositionTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeSceneMetaData_PositionTypes__Enum__Class>(type_info(), "", "RuntimeSceneMetaData", "PositionTypes");
        }
        inline app::RuntimeSceneMetaData_PositionTypes__Enum* create() {
            return il2cpp::create_object<app::RuntimeSceneMetaData_PositionTypes__Enum>(get_class());
        }
    } // namespace RuntimeSceneMetaData_PositionTypes__Enum
} // namespace app::classes::types
