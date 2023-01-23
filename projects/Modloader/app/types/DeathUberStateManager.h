#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DeathUberStateManager__Class.h>
#include <Modloader/app/structs/DeathUberStateManager.h>

namespace app::classes::types {
    namespace DeathUberStateManager {
        inline app::DeathUberStateManager__Class** type_info = (app::DeathUberStateManager__Class**)(modloader::win::memory::resolve_rva(0x04733D40));
        inline app::DeathUberStateManager__Class* get_class() {
            return il2cpp::get_class<app::DeathUberStateManager__Class>(type_info, "", "DeathUberStateManager");
        }
        inline app::DeathUberStateManager* create() {
            return il2cpp::create_object<app::DeathUberStateManager>(get_class());
        }
    } // namespace DeathUberStateManager
} // namespace app::classes::types
