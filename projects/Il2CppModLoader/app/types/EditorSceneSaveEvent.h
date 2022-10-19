#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EditorSceneSaveEvent {
        namespace {
            inline app::EditorSceneSaveEvent__Class* type_info_ref = nullptr;
        }
        inline app::EditorSceneSaveEvent__Class** type_info = &type_info_ref;
        inline app::EditorSceneSaveEvent__Class* get_class() {
            return il2cpp::get_class<app::EditorSceneSaveEvent__Class>(type_info, "", "EditorSceneSaveEvent");
        }
        inline app::EditorSceneSaveEvent* create() {
            return il2cpp::create_object<app::EditorSceneSaveEvent>(get_class());
        }
    } // namespace EditorSceneSaveEvent
} // namespace app::classes::types
