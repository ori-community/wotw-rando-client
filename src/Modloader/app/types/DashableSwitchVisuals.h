#pragma once
#include <Modloader/app/structs/DashableSwitchVisuals.h>
#include <Modloader/app/structs/DashableSwitchVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchVisuals {
        inline app::DashableSwitchVisuals__Class** type_info() {
            static app::DashableSwitchVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashableSwitchVisuals__Class**)(modloader::win::memory::resolve_rva(0x04745EC0));
            }
            return cache;
        }
        inline app::DashableSwitchVisuals__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchVisuals__Class>(type_info(), "", "DashableSwitchVisuals");
        }
        inline app::DashableSwitchVisuals* create() {
            return il2cpp::create_object<app::DashableSwitchVisuals>(get_class());
        }
    } // namespace DashableSwitchVisuals
} // namespace app::classes::types
