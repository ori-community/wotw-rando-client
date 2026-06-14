#pragma once
#include <Modloader/app/structs/LizardAttackEffects.h>
#include <Modloader/app/structs/LizardAttackEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardAttackEffects {
        inline app::LizardAttackEffects__Class** type_info() {
            static app::LizardAttackEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LizardAttackEffects__Class**)(modloader::win::memory::resolve_rva(0x04781EF8));
            }
            return cache;
        }
        inline app::LizardAttackEffects__Class* get_class() {
            return il2cpp::get_class<app::LizardAttackEffects__Class>(type_info(), "", "LizardAttackEffects");
        }
        inline app::LizardAttackEffects* create() {
            return il2cpp::create_object<app::LizardAttackEffects>(get_class());
        }
    } // namespace LizardAttackEffects
} // namespace app::classes::types
