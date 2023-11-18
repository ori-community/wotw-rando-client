#pragma once
#include <Modloader/app/structs/LizardEntityReactions.h>
#include <Modloader/app/structs/LizardEntityReactions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardEntityReactions {
        inline app::LizardEntityReactions__Class** type_info() {
            static app::LizardEntityReactions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardEntityReactions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::LizardEntityReactions__Class>(type_info(), "", "LizardEntityReactions");
        }
        inline app::LizardEntityReactions* create() {
            return il2cpp::create_object<app::LizardEntityReactions>(get_class());
        }
    } // namespace LizardEntityReactions
} // namespace app::classes::types
