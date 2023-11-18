#pragma once
#include <Modloader/app/structs/IPlatformMovement.h>
#include <Modloader/app/structs/IPlatformMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlatformMovement {
        inline app::IPlatformMovement__Class** type_info() {
            static app::IPlatformMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x04756850));
            }
            return cache;
        }
        inline app::IPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::IPlatformMovement__Class>(type_info(), "", "IPlatformMovement");
        }
    } // namespace IPlatformMovement
} // namespace app::classes::types
