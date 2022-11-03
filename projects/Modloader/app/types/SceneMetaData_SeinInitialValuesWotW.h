#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinInitialValuesWotW {
        namespace {
            inline app::SceneMetaData_SeinInitialValuesWotW__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_SeinInitialValuesWotW__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_SeinInitialValuesWotW__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinInitialValuesWotW__Class>(type_info, "", "SceneMetaData", "SeinInitialValuesWotW");
        }
        inline app::SceneMetaData_SeinInitialValuesWotW* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinInitialValuesWotW>(get_class());
        }
    } // namespace SceneMetaData_SeinInitialValuesWotW
} // namespace app::classes::types
