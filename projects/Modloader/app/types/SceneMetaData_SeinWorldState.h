#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinWorldState {
        namespace {
            inline app::SceneMetaData_SeinWorldState__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_SeinWorldState__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_SeinWorldState__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinWorldState__Class>(type_info, "", "SceneMetaData", "SeinWorldState");
        }
        inline app::SceneMetaData_SeinWorldState* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinWorldState>(get_class());
        }
    } // namespace SceneMetaData_SeinWorldState
} // namespace app::classes::types
