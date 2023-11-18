#pragma once
#include <Modloader/app/structs/HealthDebugMenuItem.h>
#include <Modloader/app/structs/HealthDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthDebugMenuItem {
        inline app::HealthDebugMenuItem__Class** type_info() {
            static app::HealthDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HealthDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0473C380));
            }
            return cache;
        }
        inline app::HealthDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::HealthDebugMenuItem__Class>(type_info(), "", "HealthDebugMenuItem");
        }
        inline app::HealthDebugMenuItem* create() {
            return il2cpp::create_object<app::HealthDebugMenuItem>(get_class());
        }
    } // namespace HealthDebugMenuItem
} // namespace app::classes::types
