#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleStoreUpdatedEventData__Class.h>
#include <Modloader/app/structs/TitleStoreUpdatedEventData.h>

namespace app::classes::types {
    namespace TitleStoreUpdatedEventData {
        namespace {
            inline app::TitleStoreUpdatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleStoreUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::TitleStoreUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleStoreUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleStoreUpdatedEventData");
        }
        inline app::TitleStoreUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleStoreUpdatedEventData>(get_class());
        }
    } // namespace TitleStoreUpdatedEventData
} // namespace app::classes::types
