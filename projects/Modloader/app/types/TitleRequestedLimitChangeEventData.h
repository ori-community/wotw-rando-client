#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData__Class.h>
#include <Modloader/app/structs/TitleRequestedLimitChangeEventData.h>

namespace app::classes::types {
    namespace TitleRequestedLimitChangeEventData {
        namespace {
            inline app::TitleRequestedLimitChangeEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleRequestedLimitChangeEventData__Class** type_info = &type_info_ref;
        inline app::TitleRequestedLimitChangeEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleRequestedLimitChangeEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleRequestedLimitChangeEventData");
        }
        inline app::TitleRequestedLimitChangeEventData* create() {
            return il2cpp::create_object<app::TitleRequestedLimitChangeEventData>(get_class());
        }
    } // namespace TitleRequestedLimitChangeEventData
} // namespace app::classes::types
