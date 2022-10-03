#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchPlayFabIdPair {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NintendoSwitchPlayFabIdPair__Class** type_info;
        inline app::NintendoSwitchPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "NintendoSwitchPlayFabIdPair");
        }
        inline app::NintendoSwitchPlayFabIdPair* create() {
            return il2cpp::create_object<app::NintendoSwitchPlayFabIdPair>(get_class());
        }
        inline app::NintendoSwitchPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::NintendoSwitchPlayFabIdPair__Array>(get_class(), size);
        }
    } // namespace NintendoSwitchPlayFabIdPair
} // namespace app::classes::types
