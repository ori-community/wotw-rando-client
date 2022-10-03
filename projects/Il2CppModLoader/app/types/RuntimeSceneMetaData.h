#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeSceneMetaData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeSceneMetaData__Class** type_info;
        inline app::RuntimeSceneMetaData__Class* get_class() {
            return il2cpp::get_class<app::RuntimeSceneMetaData__Class>(type_info, "", "RuntimeSceneMetaData");
        }
        inline app::RuntimeSceneMetaData* create() {
            return il2cpp::create_object<app::RuntimeSceneMetaData>(get_class());
        }
        inline app::RuntimeSceneMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeSceneMetaData__Array>(get_class(), size);
        }
    } // namespace RuntimeSceneMetaData
} // namespace app::classes::types
