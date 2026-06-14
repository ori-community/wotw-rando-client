#pragma once
#include <Modloader/app/structs/ISceneRootPostEnableObserver.h>
#include <Modloader/app/structs/ISceneRootPostEnableObserver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISceneRootPostEnableObserver {
        inline app::ISceneRootPostEnableObserver__Class** type_info() {
            static app::ISceneRootPostEnableObserver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISceneRootPostEnableObserver__Class**)(modloader::win::memory::resolve_rva(0x04771988));
            }
            return cache;
        }
        inline app::ISceneRootPostEnableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPostEnableObserver__Class>(type_info(), "", "ISceneRootPostEnableObserver");
        }
    } // namespace ISceneRootPostEnableObserver
} // namespace app::classes::types
