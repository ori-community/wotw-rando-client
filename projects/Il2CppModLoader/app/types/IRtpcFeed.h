#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRtpcFeed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRtpcFeed__Class** type_info;
        inline app::IRtpcFeed__Class* get_class() {
            return il2cpp::get_class<app::IRtpcFeed__Class>(type_info, "", "IRtpcFeed");
        }
        inline app::IRtpcFeed* create() {
            return il2cpp::create_object<app::IRtpcFeed>(get_class());
        }
    } // namespace IRtpcFeed
} // namespace app::classes::types
