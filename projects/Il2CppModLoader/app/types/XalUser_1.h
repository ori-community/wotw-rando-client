#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalUser_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalUser_1__Class** type_info;
        inline app::XalUser_1__Class* get_class() {
            return il2cpp::get_class<app::XalUser_1__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser");
        }
        inline app::XalUser_1* create() {
            return il2cpp::create_object<app::XalUser_1>(get_class());
        }
    } // namespace XalUser_1
} // namespace app::classes::types
