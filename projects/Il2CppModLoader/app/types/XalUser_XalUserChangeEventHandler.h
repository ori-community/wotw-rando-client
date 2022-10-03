#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalUser_XalUserChangeEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalUser_XalUserChangeEventHandler__Class** type_info;
        inline app::XalUser_XalUserChangeEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_XalUserChangeEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser", "XalUserChangeEventHandler");
        }
        inline app::XalUser_XalUserChangeEventHandler* create() {
            return il2cpp::create_object<app::XalUser_XalUserChangeEventHandler>(get_class());
        }
    } // namespace XalUser_XalUserChangeEventHandler
} // namespace app::classes::types
