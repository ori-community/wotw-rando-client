#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformNotSupportedException {
        inline app::PlatformNotSupportedException__Class** type_info = (app::PlatformNotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x04773080));
        inline app::PlatformNotSupportedException__Class* get_class() {
            return il2cpp::get_class<app::PlatformNotSupportedException__Class>(type_info, "System", "PlatformNotSupportedException");
        }
        inline app::PlatformNotSupportedException* create() {
            return il2cpp::create_object<app::PlatformNotSupportedException>(get_class());
        }
    } // namespace PlatformNotSupportedException
} // namespace app::classes::types
