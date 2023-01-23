#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BuildSummary__Class.h>
#include <Modloader/app/structs/BuildSummary.h>
#include <Modloader/app/structs/BuildSummary__Array.h>

namespace app::classes::types {
    namespace BuildSummary {
        namespace {
            inline app::BuildSummary__Class* type_info_ref = nullptr;
        }
        inline app::BuildSummary__Class** type_info = &type_info_ref;
        inline app::BuildSummary__Class* get_class() {
            return il2cpp::get_class<app::BuildSummary__Class>(type_info, "PlayFab.MultiplayerModels", "BuildSummary");
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
