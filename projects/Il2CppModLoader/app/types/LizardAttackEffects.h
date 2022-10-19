#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardAttackEffects {
        inline app::LizardAttackEffects__Class** type_info = (app::LizardAttackEffects__Class**)(modloader::win::memory::resolve_rva(0x04781EF8));
        inline app::LizardAttackEffects__Class* get_class() {
            return il2cpp::get_class<app::LizardAttackEffects__Class>(type_info, "", "LizardAttackEffects");
        }
        inline app::LizardAttackEffects* create() {
            return il2cpp::create_object<app::LizardAttackEffects>(get_class());
        }
    } // namespace LizardAttackEffects
} // namespace app::classes::types
