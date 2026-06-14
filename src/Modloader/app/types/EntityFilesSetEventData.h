#pragma once
#include <Modloader/app/structs/EntityFilesSetEventData.h>
#include <Modloader/app/structs/EntityFilesSetEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityFilesSetEventData {
        inline app::EntityFilesSetEventData__Class** type_info() {
            static app::EntityFilesSetEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityFilesSetEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityFilesSetEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityFilesSetEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityFilesSetEventData");
        }
        inline app::EntityFilesSetEventData* create() {
            return il2cpp::create_object<app::EntityFilesSetEventData>(get_class());
        }
    } // namespace EntityFilesSetEventData
} // namespace app::classes::types
