#pragma once
#include <Modloader/app/structs/MultiplayerServerSummary__Array.h>
#include <Modloader/app/structs/MultiplayerServerSummary__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerSummary__Array {
        inline app::MultiplayerServerSummary__Array__Class** type_info() {
            static app::MultiplayerServerSummary__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerSummary__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerSummary__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "MultiplayerServerSummary[]");
        }
        inline app::MultiplayerServerSummary__Array* create() {
            return il2cpp::create_object<app::MultiplayerServerSummary__Array>(get_class());
        }
    } // namespace MultiplayerServerSummary__Array
} // namespace app::classes::types
