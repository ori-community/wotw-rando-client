#pragma once
#include <Modloader/app/structs/SaveSceneManager.h>
#include <Modloader/app/structs/SaveSceneManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSceneManager {
        inline app::SaveSceneManager__Class** type_info() {
            static app::SaveSceneManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSceneManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSceneManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSceneManager__Class>(type_info(), "", "SaveSceneManager");
        }
        inline app::SaveSceneManager* create() {
            return il2cpp::create_object<app::SaveSceneManager>(get_class());
        }
    } // namespace SaveSceneManager
} // namespace app::classes::types
