#pragma once
#include <Modloader/app/structs/IScenePosition.h>
#include <Modloader/app/structs/IScenePosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IScenePosition {
        inline app::IScenePosition__Class** type_info() {
            static app::IScenePosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IScenePosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IScenePosition__Class* get_class() {
            return il2cpp::get_class<app::IScenePosition__Class>(type_info(), "Moon.SceneManagement", "IScenePosition");
        }
    } // namespace IScenePosition
} // namespace app::classes::types
