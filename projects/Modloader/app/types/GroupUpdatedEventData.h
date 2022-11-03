#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupUpdatedEventData {
        namespace {
            inline app::GroupUpdatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GroupUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::GroupUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupUpdatedEventData");
        }
        inline app::GroupUpdatedEventData* create() {
            return il2cpp::create_object<app::GroupUpdatedEventData>(get_class());
        }
    } // namespace GroupUpdatedEventData
} // namespace app::classes::types
