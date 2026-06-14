#pragma once
#include <Modloader/app/structs/XGameSaveInitializeProviderCompleted.h>
#include <Modloader/app/structs/XGameSaveInitializeProviderCompleted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGameSaveInitializeProviderCompleted {
        inline app::XGameSaveInitializeProviderCompleted__Class** type_info() {
            static app::XGameSaveInitializeProviderCompleted__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XGameSaveInitializeProviderCompleted__Class**)(modloader::win::memory::resolve_rva(0x04705100));
            }
            return cache;
        }
        inline app::XGameSaveInitializeProviderCompleted__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveInitializeProviderCompleted__Class>(type_info(), "XGamingRuntime", "XGameSaveInitializeProviderCompleted");
        }
        inline app::XGameSaveInitializeProviderCompleted* create() {
            return il2cpp::create_object<app::XGameSaveInitializeProviderCompleted>(get_class());
        }
    } // namespace XGameSaveInitializeProviderCompleted
} // namespace app::classes::types
