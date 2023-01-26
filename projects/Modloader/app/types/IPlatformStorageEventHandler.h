#pragma once
#include <Modloader/app/structs/IPlatformStorageEventHandler.h>
#include <Modloader/app/structs/IPlatformStorageEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlatformStorageEventHandler {
        inline app::IPlatformStorageEventHandler__Class** type_info() {
            static app::IPlatformStorageEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlatformStorageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04704E78));
            }
            return cache;
        }
        inline app::IPlatformStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::IPlatformStorageEventHandler__Class>(type_info(), "frameworks.xboxLive", "IPlatformStorageEventHandler");
        }
    } // namespace IPlatformStorageEventHandler
} // namespace app::classes::types
