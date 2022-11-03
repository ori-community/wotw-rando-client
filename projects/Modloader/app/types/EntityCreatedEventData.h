#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityCreatedEventData {
        namespace {
            inline app::EntityCreatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::EntityCreatedEventData__Class** type_info = &type_info_ref;
        inline app::EntityCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityCreatedEventData");
        }
        inline app::EntityCreatedEventData* create() {
            return il2cpp::create_object<app::EntityCreatedEventData>(get_class());
        }
    } // namespace EntityCreatedEventData
} // namespace app::classes::types
