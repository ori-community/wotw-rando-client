#pragma once
#include <Modloader/app/structs/LizardDodgeEvent.h>
#include <Modloader/app/structs/LizardDodgeEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardDodgeEvent {
        inline app::LizardDodgeEvent__Class** type_info() {
            static app::LizardDodgeEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LizardDodgeEvent__Class**)(modloader::win::memory::resolve_rva(0x0470B798));
            }
            return cache;
        }
        inline app::LizardDodgeEvent__Class* get_class() {
            return il2cpp::get_class<app::LizardDodgeEvent__Class>(type_info(), "", "LizardDodgeEvent");
        }
        inline app::LizardDodgeEvent* create() {
            return il2cpp::create_object<app::LizardDodgeEvent>(get_class());
        }
    } // namespace LizardDodgeEvent
} // namespace app::classes::types
