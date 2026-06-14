#pragma once
#include <Modloader/app/structs/DebugMenuWorldEventActionMenuItem.h>
#include <Modloader/app/structs/DebugMenuWorldEventActionMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMenuWorldEventActionMenuItem {
        inline app::DebugMenuWorldEventActionMenuItem__Class** type_info() {
            static app::DebugMenuWorldEventActionMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugMenuWorldEventActionMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0470C620));
            }
            return cache;
        }
        inline app::DebugMenuWorldEventActionMenuItem__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuWorldEventActionMenuItem__Class>(type_info(), "", "DebugMenuWorldEventActionMenuItem");
        }
        inline app::DebugMenuWorldEventActionMenuItem* create() {
            return il2cpp::create_object<app::DebugMenuWorldEventActionMenuItem>(get_class());
        }
    } // namespace DebugMenuWorldEventActionMenuItem
} // namespace app::classes::types
