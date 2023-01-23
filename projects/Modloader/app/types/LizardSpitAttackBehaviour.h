#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LizardSpitAttackBehaviour__Class.h>
#include <Modloader/app/structs/LizardSpitAttackBehaviour.h>

namespace app::classes::types {
    namespace LizardSpitAttackBehaviour {
        namespace {
            inline app::LizardSpitAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LizardSpitAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardSpitAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardSpitAttackBehaviour__Class>(type_info, "Moon", "LizardSpitAttackBehaviour");
        }
        inline app::LizardSpitAttackBehaviour* create() {
            return il2cpp::create_object<app::LizardSpitAttackBehaviour>(get_class());
        }
    } // namespace LizardSpitAttackBehaviour
} // namespace app::classes::types
