#pragma once
#include <Modloader/app/structs/FacebookInstantGamesPlayFabIdPair__Array.h>
#include <Modloader/app/structs/FacebookInstantGamesPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FacebookInstantGamesPlayFabIdPair__Array {
        inline app::FacebookInstantGamesPlayFabIdPair__Array__Class** type_info() {
            static app::FacebookInstantGamesPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FacebookInstantGamesPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FacebookInstantGamesPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::FacebookInstantGamesPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "FacebookInstantGamesPlayFabIdPair[]");
        }
        inline app::FacebookInstantGamesPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::FacebookInstantGamesPlayFabIdPair__Array>(get_class());
        }
    } // namespace FacebookInstantGamesPlayFabIdPair__Array
} // namespace app::classes::types
