#pragma once
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair.h>
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair__Array.h>
#include <Modloader/app/structs/NintendoSwitchPlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NintendoSwitchPlayFabIdPair {
        inline app::NintendoSwitchPlayFabIdPair__Class** type_info() {
            static app::NintendoSwitchPlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NintendoSwitchPlayFabIdPair__Class**)(modloader::win::memory::resolve_rva(0x0474D198));
            }
            return cache;
        }
        inline app::NintendoSwitchPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::NintendoSwitchPlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "NintendoSwitchPlayFabIdPair");
        }
        inline app::NintendoSwitchPlayFabIdPair* create() {
            return il2cpp::create_object<app::NintendoSwitchPlayFabIdPair>(get_class());
        }
        inline app::NintendoSwitchPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::NintendoSwitchPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::NintendoSwitchPlayFabIdPair__Array* create_array(const std::vector<app::NintendoSwitchPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::NintendoSwitchPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace NintendoSwitchPlayFabIdPair
} // namespace app::classes::types
