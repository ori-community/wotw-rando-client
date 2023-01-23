#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupCreatedEventData__Class.h>
#include <Modloader/app/structs/GroupCreatedEventData.h>

namespace app::classes::types {
    namespace GroupCreatedEventData {
        namespace {
            inline app::GroupCreatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::GroupCreatedEventData__Class** type_info = &type_info_ref;
        inline app::GroupCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupCreatedEventData");
        }
        inline app::GroupCreatedEventData* create() {
            return il2cpp::create_object<app::GroupCreatedEventData>(get_class());
        }
    } // namespace GroupCreatedEventData
} // namespace app::classes::types
