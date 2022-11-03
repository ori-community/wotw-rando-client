#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateOverrideSystem_UberStateOverride {
        inline app::StateOverrideSystem_UberStateOverride__Class** type_info = (app::StateOverrideSystem_UberStateOverride__Class**)(modloader::win::memory::resolve_rva(0x0476AED8));
        inline app::StateOverrideSystem_UberStateOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::StateOverrideSystem_UberStateOverride__Class>(type_info, "", "StateOverrideSystem", "UberStateOverride");
        }
        inline app::StateOverrideSystem_UberStateOverride* create() {
            return il2cpp::create_object<app::StateOverrideSystem_UberStateOverride>(get_class());
        }
        inline app::StateOverrideSystem_UberStateOverride__Boxed* box(app::StateOverrideSystem_UberStateOverride value) {
            return il2cpp::box_value<app::StateOverrideSystem_UberStateOverride__Boxed>(get_class(), value);
        }
    } // namespace StateOverrideSystem_UberStateOverride
} // namespace app::classes::types
