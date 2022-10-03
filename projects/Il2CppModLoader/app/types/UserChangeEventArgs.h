#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserChangeEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserChangeEventArgs__Class** type_info;
        inline app::UserChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UserChangeEventArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "UserChangeEventArgs");
        }
        inline app::UserChangeEventArgs* create() {
            return il2cpp::create_object<app::UserChangeEventArgs>(get_class());
        }
    } // namespace UserChangeEventArgs
} // namespace app::classes::types
