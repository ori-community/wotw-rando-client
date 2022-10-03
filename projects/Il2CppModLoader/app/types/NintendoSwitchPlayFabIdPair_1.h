#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchPlayFabIdPair_1 {
        namespace {
            app::NintendoSwitchPlayFabIdPair_1__Class* type_info_ref = nullptr;
        }
        app::NintendoSwitchPlayFabIdPair_1__Class** type_info = &type_info_ref;
        inline app::NintendoSwitchPlayFabIdPair_1__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchPlayFabIdPair_1__Class>(type_info, "PlayFab.ServerModels", "NintendoSwitchPlayFabIdPair");
        }
        inline app::NintendoSwitchPlayFabIdPair_1* create() {
            return il2cpp::create_object<app::NintendoSwitchPlayFabIdPair_1>(get_class());
        }
        inline app::NintendoSwitchPlayFabIdPair_1__Array* create_array(int size) {
            return il2cpp::array_new<app::NintendoSwitchPlayFabIdPair_1__Array>(get_class(), size);
        }
    } // namespace NintendoSwitchPlayFabIdPair_1
} // namespace app::classes::types
