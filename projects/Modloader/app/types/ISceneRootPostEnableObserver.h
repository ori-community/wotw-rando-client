#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISceneRootPostEnableObserver {
        inline app::ISceneRootPostEnableObserver__Class** type_info = (app::ISceneRootPostEnableObserver__Class**)(modloader::win::memory::resolve_rva(0x04771988));
        inline app::ISceneRootPostEnableObserver__Class* get_class() {
            return il2cpp::get_class<app::ISceneRootPostEnableObserver__Class>(type_info, "", "ISceneRootPostEnableObserver");
        }
    } // namespace ISceneRootPostEnableObserver
} // namespace app::classes::types
