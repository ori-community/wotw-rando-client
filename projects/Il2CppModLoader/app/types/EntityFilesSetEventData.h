#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityFilesSetEventData {
        namespace {
            app::EntityFilesSetEventData__Class* type_info_ref = nullptr;
        }
        app::EntityFilesSetEventData__Class** type_info = &type_info_ref;
        inline app::EntityFilesSetEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityFilesSetEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityFilesSetEventData");
        }
        inline app::EntityFilesSetEventData* create() {
            return il2cpp::create_object<app::EntityFilesSetEventData>(get_class());
        }
    } // namespace EntityFilesSetEventData
} // namespace app::classes::types
