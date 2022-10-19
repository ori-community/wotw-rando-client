#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardDeathReaction_c {
        inline app::LizardDeathReaction_c__Class** type_info = (app::LizardDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04732078));
        inline app::LizardDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardDeathReaction_c__Class>(type_info, "", "LizardDeathReaction", "<>c");
        }
        inline app::LizardDeathReaction_c* create() {
            return il2cpp::create_object<app::LizardDeathReaction_c>(get_class());
        }
    } // namespace LizardDeathReaction_c
} // namespace app::classes::types
