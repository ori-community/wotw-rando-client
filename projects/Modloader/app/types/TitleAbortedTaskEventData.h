#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleAbortedTaskEventData {
        namespace {
            inline app::TitleAbortedTaskEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleAbortedTaskEventData__Class** type_info = &type_info_ref;
        inline app::TitleAbortedTaskEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAbortedTaskEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleAbortedTaskEventData");
        }
        inline app::TitleAbortedTaskEventData* create() {
            return il2cpp::create_object<app::TitleAbortedTaskEventData>(get_class());
        }
    } // namespace TitleAbortedTaskEventData
} // namespace app::classes::types
