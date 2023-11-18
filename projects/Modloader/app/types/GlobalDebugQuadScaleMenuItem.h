#pragma once
#include <Modloader/app/structs/GlobalDebugQuadScaleMenuItem.h>
#include <Modloader/app/structs/GlobalDebugQuadScaleMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalDebugQuadScaleMenuItem {
        inline app::GlobalDebugQuadScaleMenuItem__Class** type_info() {
            static app::GlobalDebugQuadScaleMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GlobalDebugQuadScaleMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04734480));
            }
            return cache;
        }
        inline app::GlobalDebugQuadScaleMenuItem__Class* get_class() {
            return il2cpp::get_class<app::GlobalDebugQuadScaleMenuItem__Class>(type_info(), "", "GlobalDebugQuadScaleMenuItem");
        }
        inline app::GlobalDebugQuadScaleMenuItem* create() {
            return il2cpp::create_object<app::GlobalDebugQuadScaleMenuItem>(get_class());
        }
    } // namespace GlobalDebugQuadScaleMenuItem
} // namespace app::classes::types
