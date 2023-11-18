#pragma once
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair_1__Array.h>
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchPlayFabIdPair_1__Array {
        inline app::NintendoSwitchPlayFabIdPair_1__Array__Class** type_info() {
            static app::NintendoSwitchPlayFabIdPair_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NintendoSwitchPlayFabIdPair_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NintendoSwitchPlayFabIdPair_1__Array__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchPlayFabIdPair_1__Array__Class>(type_info(), "PlayFab.ServerModels", "NintendoSwitchPlayFabIdPair[]");
        }
        inline app::NintendoSwitchPlayFabIdPair_1__Array* create() {
            return il2cpp::create_object<app::NintendoSwitchPlayFabIdPair_1__Array>(get_class());
        }
    } // namespace NintendoSwitchPlayFabIdPair_1__Array
} // namespace app::classes::types
