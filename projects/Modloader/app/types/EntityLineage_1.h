#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityLineage_1 {
        namespace {
            inline app::EntityLineage_1__Class* type_info_ref = nullptr;
        }
        inline app::EntityLineage_1__Class** type_info = &type_info_ref;
        inline app::EntityLineage_1__Class* get_class() {
            return il2cpp::get_class<app::EntityLineage_1__Class>(type_info, "PlayFab.PlayStreamModels", "EntityLineage");
        }
        inline app::EntityLineage_1* create() {
            return il2cpp::create_object<app::EntityLineage_1>(get_class());
        }
    } // namespace EntityLineage_1
} // namespace app::classes::types
