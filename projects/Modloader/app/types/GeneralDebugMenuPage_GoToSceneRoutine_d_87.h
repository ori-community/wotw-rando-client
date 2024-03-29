#pragma once
#include <Modloader/app/structs/GeneralDebugMenuPage_GoToSceneRoutine_d_87.h>
#include <Modloader/app/structs/GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_GoToSceneRoutine_d_87 {
        inline app::GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class** type_info() {
            static app::GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class**)(modloader::win::memory::resolve_rva(0x04753058));
            }
            return cache;
        }
        inline app::GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_GoToSceneRoutine_d_87__Class>(type_info(), "", "GeneralDebugMenuPage", "<GoToSceneRoutine>d__87");
        }
        inline app::GeneralDebugMenuPage_GoToSceneRoutine_d_87* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_GoToSceneRoutine_d_87>(get_class());
        }
    } // namespace GeneralDebugMenuPage_GoToSceneRoutine_d_87
} // namespace app::classes::types
