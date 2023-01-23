#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityFilesSetEventData__Class.h>
#include <Modloader/app/structs/EntityFilesSetEventData.h>

namespace app::classes::types {
    namespace EntityFilesSetEventData {
        namespace {
            inline app::EntityFilesSetEventData__Class* type_info_ref = nullptr;
        }
        inline app::EntityFilesSetEventData__Class** type_info = &type_info_ref;
        inline app::EntityFilesSetEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityFilesSetEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityFilesSetEventData");
        }
        inline app::EntityFilesSetEventData* create() {
            return il2cpp::create_object<app::EntityFilesSetEventData>(get_class());
        }
    } // namespace EntityFilesSetEventData
} // namespace app::classes::types
