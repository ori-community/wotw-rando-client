#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneMetaData_SeinWorldStateWisp__Class.h>
#include <Modloader/app/structs/SceneMetaData_SeinWorldStateWisp.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinWorldStateWisp {
        namespace {
            inline app::SceneMetaData_SeinWorldStateWisp__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_SeinWorldStateWisp__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_SeinWorldStateWisp__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinWorldStateWisp__Class>(type_info, "", "SceneMetaData", "SeinWorldStateWisp");
        }
        inline app::SceneMetaData_SeinWorldStateWisp* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinWorldStateWisp>(get_class());
        }
    } // namespace SceneMetaData_SeinWorldStateWisp
} // namespace app::classes::types
