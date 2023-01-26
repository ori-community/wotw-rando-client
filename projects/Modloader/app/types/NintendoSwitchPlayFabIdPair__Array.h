#pragma once
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair__Array.h>
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchPlayFabIdPair__Array {
        inline app::NintendoSwitchPlayFabIdPair__Array__Class** type_info() {
            static app::NintendoSwitchPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NintendoSwitchPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NintendoSwitchPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "NintendoSwitchPlayFabIdPair[]");
        }
        inline app::NintendoSwitchPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::NintendoSwitchPlayFabIdPair__Array>(get_class());
        }
    } // namespace NintendoSwitchPlayFabIdPair__Array
} // namespace app::classes::types
