#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameSystemsEnabler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameSystemsEnabler__Class** type_info;
        inline app::GameSystemsEnabler__Class* get_class() {
            return il2cpp::get_class<app::GameSystemsEnabler__Class>(type_info, "", "GameSystemsEnabler");
        }
        inline app::GameSystemsEnabler* create() {
            return il2cpp::create_object<app::GameSystemsEnabler>(get_class());
        }
    } // namespace GameSystemsEnabler
} // namespace app::classes::types
