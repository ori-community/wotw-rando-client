#pragma once
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlatformMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformMovement {
        inline app::PlatformMovement__Class** type_info() {
            static app::PlatformMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x04757B60));
            }
            return cache;
        }
        inline app::PlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovement__Class>(type_info(), "", "PlatformMovement");
        }
        inline app::PlatformMovement* create() {
            return il2cpp::create_object<app::PlatformMovement>(get_class());
        }
    } // namespace PlatformMovement
} // namespace app::classes::types
