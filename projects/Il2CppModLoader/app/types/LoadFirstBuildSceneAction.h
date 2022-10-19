#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadFirstBuildSceneAction {
        namespace {
            inline app::LoadFirstBuildSceneAction__Class* type_info_ref = nullptr;
        }
        inline app::LoadFirstBuildSceneAction__Class** type_info = &type_info_ref;
        inline app::LoadFirstBuildSceneAction__Class* get_class() {
            return il2cpp::get_class<app::LoadFirstBuildSceneAction__Class>(type_info, "", "LoadFirstBuildSceneAction");
        }
        inline app::LoadFirstBuildSceneAction* create() {
            return il2cpp::create_object<app::LoadFirstBuildSceneAction>(get_class());
        }
    } // namespace LoadFirstBuildSceneAction
} // namespace app::classes::types
