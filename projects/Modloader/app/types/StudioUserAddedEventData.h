#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StudioUserAddedEventData__Class.h>
#include <Modloader/app/structs/StudioUserAddedEventData.h>

namespace app::classes::types {
    namespace StudioUserAddedEventData {
        namespace {
            inline app::StudioUserAddedEventData__Class* type_info_ref = nullptr;
        }
        inline app::StudioUserAddedEventData__Class** type_info = &type_info_ref;
        inline app::StudioUserAddedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioUserAddedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "StudioUserAddedEventData");
        }
        inline app::StudioUserAddedEventData* create() {
            return il2cpp::create_object<app::StudioUserAddedEventData>(get_class());
        }
    } // namespace StudioUserAddedEventData
} // namespace app::classes::types
