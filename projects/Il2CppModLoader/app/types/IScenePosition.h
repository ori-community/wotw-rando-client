#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IScenePosition {
        namespace {
            app::IScenePosition__Class* type_info_ref = nullptr;
        }
        app::IScenePosition__Class** type_info = &type_info_ref;
        inline app::IScenePosition__Class* get_class() {
            return il2cpp::get_class<app::IScenePosition__Class>(type_info, "Moon.SceneManagement", "IScenePosition");
        }
    } // namespace IScenePosition
} // namespace app::classes::types
