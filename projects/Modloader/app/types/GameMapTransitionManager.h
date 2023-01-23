#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameMapTransitionManager__Class.h>
#include <Modloader/app/structs/GameMapTransitionManager.h>

namespace app::classes::types {
    namespace GameMapTransitionManager {
        inline app::GameMapTransitionManager__Class** type_info = (app::GameMapTransitionManager__Class**)(modloader::win::memory::resolve_rva(0x047939D8));
        inline app::GameMapTransitionManager__Class* get_class() {
            return il2cpp::get_class<app::GameMapTransitionManager__Class>(type_info, "", "GameMapTransitionManager");
        }
        inline app::GameMapTransitionManager* create() {
            return il2cpp::create_object<app::GameMapTransitionManager>(get_class());
        }
    } // namespace GameMapTransitionManager
} // namespace app::classes::types
