#pragma once
#include <Modloader/app/structs/EditorSceneSaveEvent.h>
#include <Modloader/app/structs/EditorSceneSaveEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EditorSceneSaveEvent {
        inline app::EditorSceneSaveEvent__Class** type_info() {
            static app::EditorSceneSaveEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EditorSceneSaveEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EditorSceneSaveEvent__Class* get_class() {
            return il2cpp::get_class<app::EditorSceneSaveEvent__Class>(type_info(), "", "EditorSceneSaveEvent");
        }
        inline app::EditorSceneSaveEvent* create() {
            return il2cpp::create_object<app::EditorSceneSaveEvent>(get_class());
        }
    } // namespace EditorSceneSaveEvent
} // namespace app::classes::types
