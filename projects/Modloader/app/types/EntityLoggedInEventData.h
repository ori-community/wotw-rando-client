#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityLoggedInEventData__Class.h>
#include <Modloader/app/structs/EntityLoggedInEventData.h>

namespace app::classes::types {
    namespace EntityLoggedInEventData {
        namespace {
            inline app::EntityLoggedInEventData__Class* type_info_ref = nullptr;
        }
        inline app::EntityLoggedInEventData__Class** type_info = &type_info_ref;
        inline app::EntityLoggedInEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityLoggedInEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityLoggedInEventData");
        }
        inline app::EntityLoggedInEventData* create() {
            return il2cpp::create_object<app::EntityLoggedInEventData>(get_class());
        }
    } // namespace EntityLoggedInEventData
} // namespace app::classes::types
