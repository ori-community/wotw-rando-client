#pragma once
#include <Modloader/app/structs/PlatformNotSupportedException.h>
#include <Modloader/app/structs/PlatformNotSupportedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformNotSupportedException {
        inline app::PlatformNotSupportedException__Class** type_info() {
            static app::PlatformNotSupportedException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformNotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x04773080));
            }
            return cache;
        }
        inline app::PlatformNotSupportedException__Class* get_class() {
            return il2cpp::get_class<app::PlatformNotSupportedException__Class>(type_info(), "System", "PlatformNotSupportedException");
        }
        inline app::PlatformNotSupportedException* create() {
            return il2cpp::create_object<app::PlatformNotSupportedException>(get_class());
        }
    } // namespace PlatformNotSupportedException
} // namespace app::classes::types
