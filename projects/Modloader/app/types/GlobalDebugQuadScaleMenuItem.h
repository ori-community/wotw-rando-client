#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalDebugQuadScaleMenuItem {
        inline app::GlobalDebugQuadScaleMenuItem__Class** type_info = (app::GlobalDebugQuadScaleMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04734480));
        inline app::GlobalDebugQuadScaleMenuItem__Class* get_class() {
            return il2cpp::get_class<app::GlobalDebugQuadScaleMenuItem__Class>(type_info, "", "GlobalDebugQuadScaleMenuItem");
        }
        inline app::GlobalDebugQuadScaleMenuItem* create() {
            return il2cpp::create_object<app::GlobalDebugQuadScaleMenuItem>(get_class());
        }
    } // namespace GlobalDebugQuadScaleMenuItem
} // namespace app::classes::types
