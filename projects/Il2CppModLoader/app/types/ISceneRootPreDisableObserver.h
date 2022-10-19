#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISceneRootPreDisableObserver {
        inline app::ISceneRootPreDisableObserver__Class** type_info = (app::ISceneRootPreDisableObserver__Class**)(modloader::win::memory::resolve_rva(0x0474F390));
        inline app::ISceneRootPreDisableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPreDisableObserver__Class>(type_info, "", "ISceneRootPreDisableObserver");
        }
    } // namespace ISceneRootPreDisableObserver
} // namespace app::classes::types
