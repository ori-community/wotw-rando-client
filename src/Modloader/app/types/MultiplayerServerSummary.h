#pragma once
#include <Modloader/app/structs/MultiplayerServerSummary.h>
#include <Modloader/app/structs/MultiplayerServerSummary__Array.h>
#include <Modloader/app/structs/MultiplayerServerSummary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerSummary {
        inline app::MultiplayerServerSummary__Class** type_info() {
            static app::MultiplayerServerSummary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplayerServerSummary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplayerServerSummary__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerSummary__Class>(type_info(), "PlayFab.MultiplayerModels", "MultiplayerServerSummary");
        }
        inline app::MultiplayerServerSummary* create() {
            return il2cpp::create_object<app::MultiplayerServerSummary>(get_class());
        }
        inline app::MultiplayerServerSummary__Array* create_array(int size) {
            return il2cpp::array_new<app::MultiplayerServerSummary__Array>(get_class(), size);
        }
        inline app::MultiplayerServerSummary__Array* create_array(const std::vector<app::MultiplayerServerSummary*>& items) {
            return il2cpp::array_new<app::MultiplayerServerSummary__Array>(get_class(), items);
        }
    } // namespace MultiplayerServerSummary
} // namespace app::classes::types
