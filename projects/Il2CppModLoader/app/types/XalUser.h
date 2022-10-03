#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalUser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalUser__Class** type_info;
        inline app::XalUser__Class* get_class() {
            return il2cpp::get_class<app::XalUser__Class>(type_info, "SystemIntegration", "XalUser");
        }
        inline app::XalUser* create() {
            return il2cpp::create_object<app::XalUser>(get_class());
        }
    } // namespace XalUser
} // namespace app::classes::types
