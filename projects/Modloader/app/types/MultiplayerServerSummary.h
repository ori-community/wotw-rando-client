#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MultiplayerServerSummary {
        namespace {
            inline app::MultiplayerServerSummary__Class* type_info_ref = nullptr;
        }
        inline app::MultiplayerServerSummary__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerSummary__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerSummary__Class>(type_info, "PlayFab.MultiplayerModels", "MultiplayerServerSummary");
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
