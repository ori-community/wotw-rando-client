#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeProtectiveLightRadius {
        namespace {
            app::ChangeProtectiveLightRadius__Class* type_info_ref = nullptr;
        }
        app::ChangeProtectiveLightRadius__Class** type_info = &type_info_ref;
        inline app::ChangeProtectiveLightRadius__Class* get_class() {
            return il2cpp::get_class<app::ChangeProtectiveLightRadius__Class>(type_info, "", "ChangeProtectiveLightRadius");
        }
        inline app::ChangeProtectiveLightRadius* create() {
            return il2cpp::create_object<app::ChangeProtectiveLightRadius>(get_class());
        }
    } // namespace ChangeProtectiveLightRadius
} // namespace app::classes::types
