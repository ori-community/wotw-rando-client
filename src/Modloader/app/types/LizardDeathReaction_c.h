#pragma once
#include <Modloader/app/structs/LizardDeathReaction_c.h>
#include <Modloader/app/structs/LizardDeathReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardDeathReaction_c {
        inline app::LizardDeathReaction_c__Class** type_info() {
            static app::LizardDeathReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LizardDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04732078));
            }
            return cache;
        }
        inline app::LizardDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardDeathReaction_c__Class>(type_info(), "", "LizardDeathReaction", "<>c");
        }
        inline app::LizardDeathReaction_c* create() {
            return il2cpp::create_object<app::LizardDeathReaction_c>(get_class());
        }
    } // namespace LizardDeathReaction_c
} // namespace app::classes::types
