#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneUberStateCondition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneUberStateCondition__Class** type_info;
        inline app::SceneUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::SceneUberStateCondition__Class>(type_info, "", "SceneUberStateCondition");
        }
        inline app::SceneUberStateCondition* create() {
            return il2cpp::create_object<app::SceneUberStateCondition>(get_class());
        }
    } // namespace SceneUberStateCondition
} // namespace app::classes::types
