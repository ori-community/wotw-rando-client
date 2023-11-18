#pragma once
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesWotW.h>
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesWotW__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinInitialValuesWotW {
        inline app::SceneMetaData_SeinInitialValuesWotW__Class** type_info() {
            static app::SceneMetaData_SeinInitialValuesWotW__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_SeinInitialValuesWotW__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_SeinInitialValuesWotW__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinInitialValuesWotW__Class>(type_info(), "", "SceneMetaData", "SeinInitialValuesWotW");
        }
        inline app::SceneMetaData_SeinInitialValuesWotW* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinInitialValuesWotW>(get_class());
        }
    } // namespace SceneMetaData_SeinInitialValuesWotW
} // namespace app::classes::types
