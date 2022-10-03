#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildSummary {
        namespace {
            app::BuildSummary__Class* type_info_ref = nullptr;
        }
        app::BuildSummary__Class** type_info = &type_info_ref;
        inline app::BuildSummary__Class* get_class() {
            return il2cpp::get_class<app::BuildSummary__Class>(type_info, "PlayFab.MultiplayerModels", "BuildSummary");
        }
        inline app::BuildSummary* create() {
            return il2cpp::create_object<app::BuildSummary>(get_class());
        }
        inline app::BuildSummary__Array* create_array(int size) {
            return il2cpp::array_new<app::BuildSummary__Array>(get_class(), size);
        }
    } // namespace BuildSummary
} // namespace app::classes::types
