#pragma once
#include <Modloader/app/structs/SceneMetaData_WorldMapIcon__Array.h>
#include <Modloader/app/structs/SceneMetaData_WorldMapIcon__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_WorldMapIcon__Array {
        inline app::SceneMetaData_WorldMapIcon__Array__Class** type_info() {
            static app::SceneMetaData_WorldMapIcon__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_WorldMapIcon__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_WorldMapIcon__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData_WorldMapIcon__Array__Class>(type_info(), "", "SceneMetaData+WorldMapIcon[]");
        }
        inline app::SceneMetaData_WorldMapIcon__Array* create() {
            return il2cpp::create_object<app::SceneMetaData_WorldMapIcon__Array>(get_class());
        }
    } // namespace SceneMetaData_WorldMapIcon__Array
} // namespace app::classes::types
