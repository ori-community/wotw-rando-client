#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengesUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChallengesUI__Class** type_info;
        inline app::ChallengesUI__Class* get_class() {
            return il2cpp::get_class<app::ChallengesUI__Class>(type_info, "", "ChallengesUI");
        }
        inline app::ChallengesUI* create() {
            return il2cpp::create_object<app::ChallengesUI>(get_class());
        }
    } // namespace ChallengesUI
} // namespace app::classes::types
