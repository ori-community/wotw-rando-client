#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardLocomotion {
        namespace {
            inline app::LizardLocomotion__Class* type_info_ref = nullptr;
        }
        inline app::LizardLocomotion__Class** type_info = &type_info_ref;
        inline app::LizardLocomotion__Class* get_class() {
            return il2cpp::get_class<app::LizardLocomotion__Class>(type_info, "", "LizardLocomotion");
        }
        inline app::LizardLocomotion* create() {
            return il2cpp::create_object<app::LizardLocomotion>(get_class());
        }
    } // namespace LizardLocomotion
} // namespace app::classes::types
