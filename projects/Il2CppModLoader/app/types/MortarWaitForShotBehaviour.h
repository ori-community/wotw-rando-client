#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWaitForShotBehaviour {
        namespace {
            app::MortarWaitForShotBehaviour__Class* type_info_ref = nullptr;
        }
        app::MortarWaitForShotBehaviour__Class** type_info = &type_info_ref;
        inline app::MortarWaitForShotBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MortarWaitForShotBehaviour__Class>(type_info, "", "MortarWaitForShotBehaviour");
        }
        inline app::MortarWaitForShotBehaviour* create() {
            return il2cpp::create_object<app::MortarWaitForShotBehaviour>(get_class());
        }
    } // namespace MortarWaitForShotBehaviour
} // namespace app::classes::types
