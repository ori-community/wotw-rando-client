#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityLanguageUpdatedEventData__Class.h>
#include <Modloader/app/structs/EntityLanguageUpdatedEventData.h>

namespace app::classes::types {
    namespace EntityLanguageUpdatedEventData {
        namespace {
            inline app::EntityLanguageUpdatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::EntityLanguageUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::EntityLanguageUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityLanguageUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityLanguageUpdatedEventData");
        }
        inline app::EntityLanguageUpdatedEventData* create() {
            return il2cpp::create_object<app::EntityLanguageUpdatedEventData>(get_class());
        }
    } // namespace EntityLanguageUpdatedEventData
} // namespace app::classes::types
