#pragma once
#include <Modloader/app/structs/BuildSummary.h>
#include <Modloader/app/structs/BuildSummary__Array.h>
#include <Modloader/app/structs/BuildSummary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildSummary {
        inline app::BuildSummary__Class** type_info() {
            static app::BuildSummary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuildSummary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuildSummary__Class* get_class() {
            return il2cpp::get_class<app::BuildSummary__Class>(type_info(), "PlayFab.MultiplayerModels", "BuildSummary");
        }
        inline app::BuildSummary* create() {
            return il2cpp::create_object<app::BuildSummary>(get_class());
        }
        inline app::BuildSummary__Array* create_array(int size) {
            return il2cpp::array_new<app::BuildSummary__Array>(get_class(), size);
        }
        inline app::BuildSummary__Array* create_array(const std::vector<app::BuildSummary*>& items) {
            return il2cpp::array_new<app::BuildSummary__Array>(get_class(), items);
        }
    } // namespace BuildSummary
} // namespace app::classes::types
