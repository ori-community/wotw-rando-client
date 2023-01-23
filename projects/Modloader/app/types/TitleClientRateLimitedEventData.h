#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleClientRateLimitedEventData__Class.h>
#include <Modloader/app/structs/TitleClientRateLimitedEventData.h>

namespace app::classes::types {
    namespace TitleClientRateLimitedEventData {
        namespace {
            inline app::TitleClientRateLimitedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleClientRateLimitedEventData__Class** type_info = &type_info_ref;
        inline app::TitleClientRateLimitedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleClientRateLimitedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleClientRateLimitedEventData");
        }
        inline app::TitleClientRateLimitedEventData* create() {
            return il2cpp::create_object<app::TitleClientRateLimitedEventData>(get_class());
        }
    } // namespace TitleClientRateLimitedEventData
} // namespace app::classes::types
