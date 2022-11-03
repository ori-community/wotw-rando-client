#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneModeManager {
        inline app::SceneModeManager__Class** type_info = (app::SceneModeManager__Class**)(modloader::win::memory::resolve_rva(0x0476DF08));
        inline app::SceneModeManager__Class* get_class() {
            return il2cpp::get_class<app::SceneModeManager__Class>(type_info, "", "SceneModeManager");
        }
        inline app::SceneModeManager* create() {
            return il2cpp::create_object<app::SceneModeManager>(get_class());
        }
    } // namespace SceneModeManager
} // namespace app::classes::types
