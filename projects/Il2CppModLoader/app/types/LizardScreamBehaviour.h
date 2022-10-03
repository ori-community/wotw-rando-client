#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardScreamBehaviour {
        namespace {
            app::LizardScreamBehaviour__Class* type_info_ref = nullptr;
        }
        app::LizardScreamBehaviour__Class** type_info = &type_info_ref;
        inline app::LizardScreamBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardScreamBehaviour__Class>(type_info, "", "LizardScreamBehaviour");
        }
        inline app::LizardScreamBehaviour* create() {
            return il2cpp::create_object<app::LizardScreamBehaviour>(get_class());
        }
    } // namespace LizardScreamBehaviour
} // namespace app::classes::types
