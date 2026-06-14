#pragma once
#include <Modloader/app/structs/FacebookInstantGamesPlayFabIdPair.h>
#include <Modloader/app/structs/FacebookInstantGamesPlayFabIdPair__Array.h>
#include <Modloader/app/structs/FacebookInstantGamesPlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacebookInstantGamesPlayFabIdPair {
        inline app::FacebookInstantGamesPlayFabIdPair__Class** type_info() {
            static app::FacebookInstantGamesPlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacebookInstantGamesPlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacebookInstantGamesPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::FacebookInstantGamesPlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "FacebookInstantGamesPlayFabIdPair");
        }
        inline app::FacebookInstantGamesPlayFabIdPair* create() {
            return il2cpp::create_object<app::FacebookInstantGamesPlayFabIdPair>(get_class());
        }
        inline app::FacebookInstantGamesPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::FacebookInstantGamesPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::FacebookInstantGamesPlayFabIdPair__Array* create_array(const std::vector<app::FacebookInstantGamesPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::FacebookInstantGamesPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace FacebookInstantGamesPlayFabIdPair
} // namespace app::classes::types
