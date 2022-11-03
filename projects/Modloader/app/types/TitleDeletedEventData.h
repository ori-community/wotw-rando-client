#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleDeletedEventData {
        namespace {
            inline app::TitleDeletedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleDeletedEventData__Class** type_info = &type_info_ref;
        inline app::TitleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleDeletedEventData");
        }
        inline app::TitleDeletedEventData* create() {
            return il2cpp::create_object<app::TitleDeletedEventData>(get_class());
        }
    } // namespace TitleDeletedEventData
} // namespace app::classes::types
