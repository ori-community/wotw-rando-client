#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplayerServerSummary {
        namespace {
            app::MultiplayerServerSummary__Class* type_info_ref = nullptr;
        }
        app::MultiplayerServerSummary__Class** type_info = &type_info_ref;
        inline app::MultiplayerServerSummary__Class* get_class() {
            return il2cpp::get_class<app::MultiplayerServerSummary__Class>(type_info, "PlayFab.MultiplayerModels", "MultiplayerServerSummary");
        }
        inline app::MultiplayerServerSummary* create() {
            return il2cpp::create_object<app::MultiplayerServerSummary>(get_class());
        }
        inline app::MultiplayerServerSummary__Array* create_array(int size) {
            return il2cpp::array_new<app::MultiplayerServerSummary__Array>(get_class(), size);
        }
    } // namespace MultiplayerServerSummary
} // namespace app::classes::types
