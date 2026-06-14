#pragma once
#include <Modloader/app/structs/XGameSaveProviderHandle.h>
#include <Modloader/app/structs/XGameSaveProviderHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveProviderHandle {
        inline app::XGameSaveProviderHandle__Class** type_info() {
            static app::XGameSaveProviderHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XGameSaveProviderHandle__Class**)(modloader::win::memory::resolve_rva(0x04734A70));
            }
            return cache;
        }
        inline app::XGameSaveProviderHandle__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveProviderHandle__Class>(type_info(), "XGamingRuntime", "XGameSaveProviderHandle");
        }
        inline app::XGameSaveProviderHandle* create() {
            return il2cpp::create_object<app::XGameSaveProviderHandle>(get_class());
        }
    } // namespace XGameSaveProviderHandle
} // namespace app::classes::types
