#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecorderTimelineManager__Class.h>
#include <Modloader/app/structs/RecorderTimelineManager.h>

namespace app::classes::types {
    namespace RecorderTimelineManager {
        inline app::RecorderTimelineManager__Class** type_info = (app::RecorderTimelineManager__Class**)(modloader::win::memory::resolve_rva(0x0472C910));
        inline app::RecorderTimelineManager__Class* get_class() {
            return il2cpp::get_class<app::RecorderTimelineManager__Class>(type_info, "", "RecorderTimelineManager");
        }
        inline app::RecorderTimelineManager* create() {
            return il2cpp::create_object<app::RecorderTimelineManager>(get_class());
        }
    } // namespace RecorderTimelineManager
} // namespace app::classes::types
