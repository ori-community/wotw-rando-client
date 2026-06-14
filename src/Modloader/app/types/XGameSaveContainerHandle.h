#pragma once
#include <Modloader/app/structs/XGameSaveContainerHandle.h>
#include <Modloader/app/structs/XGameSaveContainerHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveContainerHandle {
        inline app::XGameSaveContainerHandle__Class** type_info() {
            static app::XGameSaveContainerHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XGameSaveContainerHandle__Class**)(modloader::win::memory::resolve_rva(0x04752FD8));
            }
            return cache;
        }
        inline app::XGameSaveContainerHandle__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveContainerHandle__Class>(type_info(), "XGamingRuntime", "XGameSaveContainerHandle");
        }
        inline app::XGameSaveContainerHandle* create() {
            return il2cpp::create_object<app::XGameSaveContainerHandle>(get_class());
        }
    } // namespace XGameSaveContainerHandle
} // namespace app::classes::types
