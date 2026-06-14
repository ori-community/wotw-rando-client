#pragma once
#include <Modloader/app/structs/TimelineCharacterPreviewManager_CharacterPreviewInstance.h>
#include <Modloader/app/structs/TimelineCharacterPreviewManager_CharacterPreviewInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineCharacterPreviewManager_CharacterPreviewInstance {
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class** type_info() {
            static app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class**)(modloader::win::memory::resolve_rva(0x04772138));
            }
            return cache;
        }
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class* get_class() {
            return il2cpp::get_nested_class<app::TimelineCharacterPreviewManager_CharacterPreviewInstance__Class>(type_info(), "", "TimelineCharacterPreviewManager", "CharacterPreviewInstance");
        }
        inline app::TimelineCharacterPreviewManager_CharacterPreviewInstance* create() {
            return il2cpp::create_object<app::TimelineCharacterPreviewManager_CharacterPreviewInstance>(get_class());
        }
    } // namespace TimelineCharacterPreviewManager_CharacterPreviewInstance
} // namespace app::classes::types
