#pragma once
#include <Modloader/app/structs/ISceneRootPreDisableObserver.h>
#include <Modloader/app/structs/ISceneRootPreDisableObserver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISceneRootPreDisableObserver {
        inline app::ISceneRootPreDisableObserver__Class** type_info() {
            static app::ISceneRootPreDisableObserver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISceneRootPreDisableObserver__Class**)(modloader::win::memory::resolve_rva(0x0474F390));
            }
            return cache;
        }
        inline app::ISceneRootPreDisableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPreDisableObserver__Class>(type_info(), "", "ISceneRootPreDisableObserver");
        }
    } // namespace ISceneRootPreDisableObserver
} // namespace app::classes::types
