#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData__Class.h>
#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData.h>

namespace app::classes::types {
    namespace MasterPlayerTitleDeletedEventData {
        namespace {
            inline app::MasterPlayerTitleDeletedEventData__Class* type_info_ref = nullptr;
        }
        inline app::MasterPlayerTitleDeletedEventData__Class** type_info = &type_info_ref;
        inline app::MasterPlayerTitleDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::MasterPlayerTitleDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "MasterPlayerTitleDeletedEventData");
        }
        inline app::MasterPlayerTitleDeletedEventData* create() {
            return il2cpp::create_object<app::MasterPlayerTitleDeletedEventData>(get_class());
        }
    } // namespace MasterPlayerTitleDeletedEventData
} // namespace app::classes::types
