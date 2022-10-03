#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneLeaderboards {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneLeaderboards__Class** type_info;
        inline app::XboxOneLeaderboards__Class* get_class() {
            return il2cpp::get_class<app::XboxOneLeaderboards__Class>(type_info, "", "XboxOneLeaderboards");
        }
        inline app::XboxOneLeaderboards* create() {
            return il2cpp::create_object<app::XboxOneLeaderboards>(get_class());
        }
    } // namespace XboxOneLeaderboards
} // namespace app::classes::types
