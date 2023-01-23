#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreloadSceneAction__Class.h>
#include <Modloader/app/structs/PreloadSceneAction.h>

namespace app::classes::types {
    namespace PreloadSceneAction {
        namespace {
            inline app::PreloadSceneAction__Class* type_info_ref = nullptr;
        }
        inline app::PreloadSceneAction__Class** type_info = &type_info_ref;
        inline app::PreloadSceneAction__Class* get_class() {
            return il2cpp::get_class<app::PreloadSceneAction__Class>(type_info, "", "PreloadSceneAction");
        }
        inline app::PreloadSceneAction* create() {
            return il2cpp::create_object<app::PreloadSceneAction>(get_class());
        }
    } // namespace PreloadSceneAction
} // namespace app::classes::types
