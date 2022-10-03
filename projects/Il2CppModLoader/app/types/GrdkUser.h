#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrdkUser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrdkUser__Class** type_info;
        inline app::GrdkUser__Class* get_class() {
            return il2cpp::get_class<app::GrdkUser__Class>(type_info, "SystemIntegration.User", "GrdkUser");
        }
        inline app::GrdkUser* create() {
            return il2cpp::create_object<app::GrdkUser>(get_class());
        }
    } // namespace GrdkUser
} // namespace app::classes::types
