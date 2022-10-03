#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChallengeShrineManager__Class** type_info;
        inline app::ChallengeShrineManager__Class* get_class() {
            return il2cpp::get_class<app::ChallengeShrineManager__Class>(type_info, "", "ChallengeShrineManager");
        }
        inline app::ChallengeShrineManager* create() {
            return il2cpp::create_object<app::ChallengeShrineManager>(get_class());
        }
    } // namespace ChallengeShrineManager
} // namespace app::classes::types
