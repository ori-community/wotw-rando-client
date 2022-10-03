#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineCharacterPreviewManager_CharacterPreviewInstance {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class** type_info;
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class>(type_info, "", "TimelineCharacterPreviewManager", "CharacterPreviewInstance");
        }
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance* create() {
            return il2cpp::create_object<app::TimelineCharacterPreviewManager_CharacterPreviewInstance>(get_class());
        }
    } // namespace TimelineCharacterPreviewManager_CharacterPreviewInstance
} // namespace app::classes::types
