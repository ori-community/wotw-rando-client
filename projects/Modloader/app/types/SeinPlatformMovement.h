#pragma once
#include <Modloader/app/structs/SeinPlatformMovement.h>
#include <Modloader/app/structs/SeinPlatformMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPlatformMovement {
        inline app::SeinPlatformMovement__Class** type_info() {
            static app::SeinPlatformMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPlatformMovement__Class**)(modloader::win::memory::resolve_rva(0x047818C0));
            }
            return cache;
        }
        inline app::SeinPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::SeinPlatformMovement__Class>(type_info(), "", "SeinPlatformMovement");
        }
        inline app::SeinPlatformMovement* create() {
            return il2cpp::create_object<app::SeinPlatformMovement>(get_class());
        }
    } // namespace SeinPlatformMovement
} // namespace app::classes::types
