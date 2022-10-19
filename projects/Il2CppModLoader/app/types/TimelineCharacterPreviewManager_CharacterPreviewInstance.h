#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineCharacterPreviewManager_CharacterPreviewInstance {
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class** type_info = (app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class**)(modloader::win::memory::resolve_rva(0x04772138));
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class>(type_info, "", "TimelineCharacterPreviewManager", "CharacterPreviewInstance");
        }
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance* create() {
            return il2cpp::create_object<app::TimelineCharacterPreviewManager_CharacterPreviewInstance>(get_class());
        }
    } // namespace TimelineCharacterPreviewManager_CharacterPreviewInstance
} // namespace app::classes::types
