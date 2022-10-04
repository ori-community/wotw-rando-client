#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRtpcFeed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRtpcFeed__Class** type_info;
        inline app::IRtpcFeed__Class* get_class() {
            return il2cpp::get_class<app::IRtpcFeed__Class>(type_info, "", "IRtpcFeed");
        }
    } // namespace IRtpcFeed
} // namespace app::classes::types
