#pragma once
#include <Modloader/app/structs/ExtraZoomDebugMenuItem.h>
#include <Modloader/app/structs/ExtraZoomDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtraZoomDebugMenuItem {
        inline app::ExtraZoomDebugMenuItem__Class** type_info() {
            static app::ExtraZoomDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtraZoomDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04788AA8));
            }
            return cache;
        }
        inline app::ExtraZoomDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ExtraZoomDebugMenuItem__Class>(type_info(), "", "ExtraZoomDebugMenuItem");
        }
        inline app::ExtraZoomDebugMenuItem* create() {
            return il2cpp::create_object<app::ExtraZoomDebugMenuItem>(get_class());
        }
    } // namespace ExtraZoomDebugMenuItem
} // namespace app::classes::types
