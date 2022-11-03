#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardDodgeEvent {
        inline app::LizardDodgeEvent__Class** type_info = (app::LizardDodgeEvent__Class**)(modloader::win::memory::resolve_rva(0x0470B798));
        inline app::LizardDodgeEvent__Class* get_class() {
            return il2cpp::get_class<app::LizardDodgeEvent__Class>(type_info, "", "LizardDodgeEvent");
        }
        inline app::LizardDodgeEvent* create() {
            return il2cpp::create_object<app::LizardDodgeEvent>(get_class());
        }
    } // namespace LizardDodgeEvent
} // namespace app::classes::types
