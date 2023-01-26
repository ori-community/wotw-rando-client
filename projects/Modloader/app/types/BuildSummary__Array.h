#pragma once
#include <Modloader/app/structs/BuildSummary__Array.h>
#include <Modloader/app/structs/BuildSummary__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuildSummary__Array {
        inline app::BuildSummary__Array__Class** type_info() {
            static app::BuildSummary__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BuildSummary__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BuildSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::BuildSummary__Array__Class>(type_info(), "PlayFab.MultiplayerModels", "BuildSummary[]");
        }
        inline app::BuildSummary__Array* create() {
            return il2cpp::create_object<app::BuildSummary__Array>(get_class());
        }
    } // namespace BuildSummary__Array
} // namespace app::classes::types
