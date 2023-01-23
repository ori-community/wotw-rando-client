#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateOverrideSystem_PassiveStateOverride__Class.h>
#include <Modloader/app/structs/StateOverrideSystem_PassiveStateOverride.h>
#include <Modloader/app/structs/StateOverrideSystem_PassiveStateOverride__Boxed.h>

namespace app::classes::types {
    namespace StateOverrideSystem_PassiveStateOverride {
        inline app::StateOverrideSystem_PassiveStateOverride__Class** type_info = (app::StateOverrideSystem_PassiveStateOverride__Class**)(modloader::win::memory::resolve_rva(0x0476F810));
        inline app::StateOverrideSystem_PassiveStateOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::StateOverrideSystem_PassiveStateOverride__Class>(type_info, "", "StateOverrideSystem", "PassiveStateOverride");
        }
        inline app::StateOverrideSystem_PassiveStateOverride* create() {
            return il2cpp::create_object<app::StateOverrideSystem_PassiveStateOverride>(get_class());
        }
        inline app::StateOverrideSystem_PassiveStateOverride__Boxed* box(app::StateOverrideSystem_PassiveStateOverride value) {
            return il2cpp::box_value<app::StateOverrideSystem_PassiveStateOverride__Boxed>(get_class(), value);
        }
    } // namespace StateOverrideSystem_PassiveStateOverride
} // namespace app::classes::types
