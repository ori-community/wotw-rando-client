#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardGroundChaseBehaviour {
        namespace {
            inline app::LizardGroundChaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LizardGroundChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardGroundChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardGroundChaseBehaviour__Class>(type_info, "Moon", "LizardGroundChaseBehaviour");
        }
        inline app::LizardGroundChaseBehaviour* create() {
            return il2cpp::create_object<app::LizardGroundChaseBehaviour>(get_class());
        }
    } // namespace LizardGroundChaseBehaviour
} // namespace app::classes::types
