#pragma once
#include <Modloader/app/structs/EarlyZDelayDebugMenuItem.h>
#include <Modloader/app/structs/EarlyZDelayDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyZDelayDebugMenuItem {
        inline app::EarlyZDelayDebugMenuItem__Class** type_info() {
            static app::EarlyZDelayDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EarlyZDelayDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047890E0));
            }
            return cache;
        }
        inline app::EarlyZDelayDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::EarlyZDelayDebugMenuItem__Class>(type_info(), "Moon.Rendering", "EarlyZDelayDebugMenuItem");
        }
        inline app::EarlyZDelayDebugMenuItem* create() {
            return il2cpp::create_object<app::EarlyZDelayDebugMenuItem>(get_class());
        }
    } // namespace EarlyZDelayDebugMenuItem
} // namespace app::classes::types
