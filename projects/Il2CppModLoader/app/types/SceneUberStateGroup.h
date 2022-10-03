#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneUberStateGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneUberStateGroup__Class** type_info;
        inline app::SceneUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::SceneUberStateGroup__Class>(type_info, "Moon", "SceneUberStateGroup");
        }
        inline app::SceneUberStateGroup* create() {
            return il2cpp::create_object<app::SceneUberStateGroup>(get_class());
        }
        inline app::SceneUberStateGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneUberStateGroup__Array>(get_class(), size);
        }
    } // namespace SceneUberStateGroup
} // namespace app::classes::types
