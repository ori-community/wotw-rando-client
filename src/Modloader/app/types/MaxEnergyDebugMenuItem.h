#pragma once
#include <Modloader/app/structs/MaxEnergyDebugMenuItem.h>
#include <Modloader/app/structs/MaxEnergyDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaxEnergyDebugMenuItem {
        inline app::MaxEnergyDebugMenuItem__Class** type_info() {
            static app::MaxEnergyDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaxEnergyDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0474F1E8));
            }
            return cache;
        }
        inline app::MaxEnergyDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::MaxEnergyDebugMenuItem__Class>(type_info(), "", "MaxEnergyDebugMenuItem");
        }
        inline app::MaxEnergyDebugMenuItem* create() {
            return il2cpp::create_object<app::MaxEnergyDebugMenuItem>(get_class());
        }
    } // namespace MaxEnergyDebugMenuItem
} // namespace app::classes::types
