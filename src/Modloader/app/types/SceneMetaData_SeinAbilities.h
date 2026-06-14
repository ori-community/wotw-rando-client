#pragma once
#include <Modloader/app/structs/SceneMetaData_SeinAbilities.h>
#include <Modloader/app/structs/SceneMetaData_SeinAbilities__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinAbilities {
        inline app::SceneMetaData_SeinAbilities__Class** type_info() {
            static app::SceneMetaData_SeinAbilities__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_SeinAbilities__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_SeinAbilities__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinAbilities__Class>(type_info(), "", "SceneMetaData", "SeinAbilities");
        }
        inline app::SceneMetaData_SeinAbilities* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinAbilities>(get_class());
        }
    } // namespace SceneMetaData_SeinAbilities
} // namespace app::classes::types
