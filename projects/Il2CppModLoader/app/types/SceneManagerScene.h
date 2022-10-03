#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneManagerScene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneManagerScene__Class** type_info;
        inline app::SceneManagerScene__Class* get_class() {
            return il2cpp::get_class<app::SceneManagerScene__Class>(type_info, "", "SceneManagerScene");
        }
        inline app::SceneManagerScene* create() {
            return il2cpp::create_object<app::SceneManagerScene>(get_class());
        }
        inline app::SceneManagerScene__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneManagerScene__Array>(get_class(), size);
        }
    } // namespace SceneManagerScene
} // namespace app::classes::types
