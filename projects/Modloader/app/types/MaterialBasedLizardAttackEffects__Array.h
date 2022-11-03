#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedLizardAttackEffects__Array {
        inline app::MaterialBasedLizardAttackEffects__Array__Class** type_info = (app::MaterialBasedLizardAttackEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x0476B458));
        inline app::MaterialBasedLizardAttackEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedLizardAttackEffects__Array__Class>(type_info, "", "MaterialBasedLizardAttackEffects[]");
        }
        inline app::MaterialBasedLizardAttackEffects__Array* create() {
            return il2cpp::create_object<app::MaterialBasedLizardAttackEffects__Array>(get_class());
        }
    } // namespace MaterialBasedLizardAttackEffects__Array
} // namespace app::classes::types
