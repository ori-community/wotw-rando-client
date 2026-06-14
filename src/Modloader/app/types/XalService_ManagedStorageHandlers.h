#pragma once
#include <Modloader/app/structs/XalService_ManagedStorageHandlers.h>
#include <Modloader/app/structs/XalService_ManagedStorageHandlers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_ManagedStorageHandlers {
        inline app::XalService_ManagedStorageHandlers__Class** type_info() {
            static app::XalService_ManagedStorageHandlers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_ManagedStorageHandlers__Class**)(modloader::win::memory::resolve_rva(0x04756110));
            }
            return cache;
        }
        inline app::XalService_ManagedStorageHandlers__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_ManagedStorageHandlers__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "ManagedStorageHandlers");
        }
        inline app::XalService_ManagedStorageHandlers* create() {
            return il2cpp::create_object<app::XalService_ManagedStorageHandlers>(get_class());
        }
    } // namespace XalService_ManagedStorageHandlers
} // namespace app::classes::types
