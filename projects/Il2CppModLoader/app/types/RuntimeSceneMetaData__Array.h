#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeSceneMetaData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeSceneMetaData__Array__Class** type_info;
        inline app::RuntimeSceneMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeSceneMetaData__Array__Class>(type_info, "", "RuntimeSceneMetaData[]");
        }
        inline app::RuntimeSceneMetaData__Array* create() {
            return il2cpp::create_object<app::RuntimeSceneMetaData__Array>(get_class());
        }
    } // namespace RuntimeSceneMetaData__Array
} // namespace app::classes::types
