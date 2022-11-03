#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestrictAbilityController {
        inline app::RestrictAbilityController__Class** type_info = (app::RestrictAbilityController__Class**)(modloader::win::memory::resolve_rva(0x04795708));
        inline app::RestrictAbilityController__Class* get_class() {
            return il2cpp::get_class<app::RestrictAbilityController__Class>(type_info, "", "RestrictAbilityController");
        }
        inline app::RestrictAbilityController* create() {
            return il2cpp::create_object<app::RestrictAbilityController>(get_class());
        }
    } // namespace RestrictAbilityController
} // namespace app::classes::types
