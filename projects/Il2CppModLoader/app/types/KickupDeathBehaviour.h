#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KickupDeathBehaviour {
        namespace {
            app::KickupDeathBehaviour__Class* type_info_ref = nullptr;
        }
        app::KickupDeathBehaviour__Class** type_info = &type_info_ref;
        inline app::KickupDeathBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KickupDeathBehaviour__Class>(type_info, "", "KickupDeathBehaviour");
        }
        inline app::KickupDeathBehaviour* create() {
            return il2cpp::create_object<app::KickupDeathBehaviour>(get_class());
        }
    } // namespace KickupDeathBehaviour
} // namespace app::classes::types
