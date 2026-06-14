#pragma once
#include <Modloader/app/structs/ISceneRootPreEnableObserver.h>
#include <Modloader/app/structs/ISceneRootPreEnableObserver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISceneRootPreEnableObserver {
        inline app::ISceneRootPreEnableObserver__Class** type_info() {
            static app::ISceneRootPreEnableObserver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISceneRootPreEnableObserver__Class**)(modloader::win::memory::resolve_rva(0x04750508));
            }
            return cache;
        }
        inline app::ISceneRootPreEnableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPreEnableObserver__Class>(type_info(), "", "ISceneRootPreEnableObserver");
        }
    } // namespace ISceneRootPreEnableObserver
} // namespace app::classes::types
