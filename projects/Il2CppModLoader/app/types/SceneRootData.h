#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneRootData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneRootData__Class** type_info;
        inline app::SceneRootData__Class* get_class() {
            return il2cpp::get_class<app::SceneRootData__Class>(type_info, "", "SceneRootData");
        }
        inline app::SceneRootData* create() {
            return il2cpp::create_object<app::SceneRootData>(get_class());
        }
    } // namespace SceneRootData
} // namespace app::classes::types
