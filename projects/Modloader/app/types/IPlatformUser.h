#pragma once
#include <Modloader/app/structs/IPlatformUser.h>
#include <Modloader/app/structs/IPlatformUser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlatformUser {
        inline app::IPlatformUser__Class** type_info() {
            static app::IPlatformUser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlatformUser__Class**)(modloader::win::memory::resolve_rva(0x04797120));
            }
            return cache;
        }
        inline app::IPlatformUser__Class* get_class() {
            return il2cpp::get_class<app::IPlatformUser__Class>(type_info(), "SystemIntegration", "IPlatformUser");
        }
    } // namespace IPlatformUser
} // namespace app::classes::types
