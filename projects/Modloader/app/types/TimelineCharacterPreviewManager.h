#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimelineCharacterPreviewManager__Class.h>
#include <Modloader/app/structs/TimelineCharacterPreviewManager.h>

namespace app::classes::types {
    namespace TimelineCharacterPreviewManager {
        inline app::TimelineCharacterPreviewManager__Class** type_info = (app::TimelineCharacterPreviewManager__Class**)(modloader::win::memory::resolve_rva(0x047602E0));
        inline app::TimelineCharacterPreviewManager__Class* get_class() {
            return il2cpp::get_class<app::TimelineCharacterPreviewManager__Class>(type_info, "", "TimelineCharacterPreviewManager");
        }
        inline app::TimelineCharacterPreviewManager* create() {
            return il2cpp::create_object<app::TimelineCharacterPreviewManager>(get_class());
        }
    } // namespace TimelineCharacterPreviewManager
} // namespace app::classes::types
