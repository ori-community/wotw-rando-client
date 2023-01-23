#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleStartedTaskEventData__Class.h>
#include <Modloader/app/structs/TitleStartedTaskEventData.h>

namespace app::classes::types {
    namespace TitleStartedTaskEventData {
        namespace {
            inline app::TitleStartedTaskEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleStartedTaskEventData__Class** type_info = &type_info_ref;
        inline app::TitleStartedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleStartedTaskEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleStartedTaskEventData");
        }
        inline app::TitleStartedTaskEventData* create() {
            return il2cpp::create_object<app::TitleStartedTaskEventData>(get_class());
        }
    } // namespace TitleStartedTaskEventData
} // namespace app::classes::types
