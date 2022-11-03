#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData_WorldMapIcon__Array {
        namespace {
            inline app::SceneMetaData_WorldMapIcon__Array__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_WorldMapIcon__Array__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_WorldMapIcon__Array__Class* get_class() {
            return il2cpp::get_class<app::SceneMetaData_WorldMapIcon__Array__Class>(type_info, "", "SceneMetaData+WorldMapIcon[]");
        }
        inline app::SceneMetaData_WorldMapIcon__Array* create() {
            return il2cpp::create_object<app::SceneMetaData_WorldMapIcon__Array>(get_class());
        }
    } // namespace SceneMetaData_WorldMapIcon__Array
} // namespace app::classes::types
