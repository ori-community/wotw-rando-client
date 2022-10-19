#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserChangeEventArgs {
        inline app::UserChangeEventArgs__Class** type_info = (app::UserChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0478AB10));
        inline app::UserChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UserChangeEventArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "UserChangeEventArgs");
        }
        inline app::UserChangeEventArgs* create() {
            return il2cpp::create_object<app::UserChangeEventArgs>(get_class());
        }
    } // namespace UserChangeEventArgs
} // namespace app::classes::types
