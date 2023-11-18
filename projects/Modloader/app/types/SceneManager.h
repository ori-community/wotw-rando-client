#pragma once
#include <Modloader/app/structs/SceneManager.h>
#include <Modloader/app/structs/SceneManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneManager {
        inline app::SceneManager__Class** type_info() {
            static app::SceneManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneManager__Class**)(modloader::win::memory::resolve_rva(0x04717260));
            }
            return cache;
        }
        inline app::SceneManager__Class* get_class() {
            return il2cpp::get_class<app::SceneManager__Class>(type_info(), "UnityEngine.SceneManagement", "SceneManager");
        }
        inline app::SceneManager* create() {
            return il2cpp::create_object<app::SceneManager>(get_class());
        }
    } // namespace SceneManager
} // namespace app::classes::types
