#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardEntityReactions {
        namespace {
            inline app::LizardEntityReactions__Class* type_info_ref = nullptr;
        }
        inline app::LizardEntityReactions__Class** type_info = &type_info_ref;
        inline app::LizardEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::LizardEntityReactions__Class>(type_info, "", "LizardEntityReactions");
        }
        inline app::LizardEntityReactions* create() {
            return il2cpp::create_object<app::LizardEntityReactions>(get_class());
        }
    } // namespace LizardEntityReactions
} // namespace app::classes::types
