#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneWarningManager {
        inline app::SceneWarningManager__Class** type_info = (app::SceneWarningManager__Class**)(modloader::win::memory::resolve_rva(0x047846A0));
        inline app::SceneWarningManager__Class* get_class() {
            return il2cpp::get_class<app::SceneWarningManager__Class>(type_info, "", "SceneWarningManager");
        }
        inline app::SceneWarningManager* create() {
            return il2cpp::create_object<app::SceneWarningManager>(get_class());
        }
    } // namespace SceneWarningManager
} // namespace app::classes::types
