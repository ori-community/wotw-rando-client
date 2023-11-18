#pragma once
#include <Modloader/app/structs/TimelineCharacterPreviewManager.h>
#include <Modloader/app/structs/TimelineCharacterPreviewManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineCharacterPreviewManager {
        inline app::TimelineCharacterPreviewManager__Class** type_info() {
            static app::TimelineCharacterPreviewManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimelineCharacterPreviewManager__Class**)(modloader::win::memory::resolve_rva(0x047602E0));
            }
            return cache;
        }
        inline app::TimelineCharacterPreviewManager__Class* get_class() {
            return il2cpp::get_class<app::TimelineCharacterPreviewManager__Class>(type_info(), "", "TimelineCharacterPreviewManager");
        }
        inline app::TimelineCharacterPreviewManager* create() {
            return il2cpp::create_object<app::TimelineCharacterPreviewManager>(get_class());
        }
    } // namespace TimelineCharacterPreviewManager
} // namespace app::classes::types
