#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuildSummary__Array {
        namespace {
            inline app::BuildSummary__Array__Class* type_info_ref = nullptr;
        }
        inline app::BuildSummary__Array__Class** type_info = &type_info_ref;
        inline app::BuildSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildSummary__Array__Class>(type_info, "PlayFab.MultiplayerModels", "BuildSummary[]");
        }
        inline app::BuildSummary__Array* create() {
            return il2cpp::create_object<app::BuildSummary__Array>(get_class());
        }
    } // namespace BuildSummary__Array
} // namespace app::classes::types
