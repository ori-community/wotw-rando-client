#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZoomDebugMenuItem {
        inline app::ZoomDebugMenuItem__Class** type_info = (app::ZoomDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0478E620));
        inline app::ZoomDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ZoomDebugMenuItem__Class>(type_info, "", "ZoomDebugMenuItem");
        }
        inline app::ZoomDebugMenuItem* create() {
            return il2cpp::create_object<app::ZoomDebugMenuItem>(get_class());
        }
    } // namespace ZoomDebugMenuItem
} // namespace app::classes::types
