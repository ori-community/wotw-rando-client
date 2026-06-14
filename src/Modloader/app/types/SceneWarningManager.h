#pragma once
#include <Modloader/app/structs/SceneWarningManager.h>
#include <Modloader/app/structs/SceneWarningManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneWarningManager {
        inline app::SceneWarningManager__Class** type_info() {
            static app::SceneWarningManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneWarningManager__Class**)(modloader::win::memory::resolve_rva(0x047846A0));
            }
            return cache;
        }
        inline app::SceneWarningManager__Class* get_class() {
            return il2cpp::get_class<app::SceneWarningManager__Class>(type_info(), "", "SceneWarningManager");
        }
        inline app::SceneWarningManager* create() {
            return il2cpp::create_object<app::SceneWarningManager>(get_class());
        }
    } // namespace SceneWarningManager
} // namespace app::classes::types
