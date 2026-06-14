#pragma once
#include <Modloader/app/structs/SceneMetaData_SeinWorldStateWisp.h>
#include <Modloader/app/structs/SceneMetaData_SeinWorldStateWisp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinWorldStateWisp {
        inline app::SceneMetaData_SeinWorldStateWisp__Class** type_info() {
            static app::SceneMetaData_SeinWorldStateWisp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_SeinWorldStateWisp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_SeinWorldStateWisp__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinWorldStateWisp__Class>(type_info(), "", "SceneMetaData", "SeinWorldStateWisp");
        }
        inline app::SceneMetaData_SeinWorldStateWisp* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinWorldStateWisp>(get_class());
        }
    } // namespace SceneMetaData_SeinWorldStateWisp
} // namespace app::classes::types
