#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitArgs__Class** type_info;
        inline app::InitArgs__Class* get_class() {
            return il2cpp::get_class<app::InitArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "InitArgs");
        }
        inline app::InitArgs* create() {
            return il2cpp::create_object<app::InitArgs>(get_class());
        }
    } // namespace InitArgs
} // namespace app::classes::types
