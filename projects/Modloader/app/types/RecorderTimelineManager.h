#pragma once
#include <Modloader/app/structs/RecorderTimelineManager.h>
#include <Modloader/app/structs/RecorderTimelineManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderTimelineManager {
        inline app::RecorderTimelineManager__Class** type_info() {
            static app::RecorderTimelineManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecorderTimelineManager__Class**)(modloader::win::memory::resolve_rva(0x0472C910));
            }
            return cache;
        }
        inline app::RecorderTimelineManager__Class* get_class() {
            return il2cpp::get_class<app::RecorderTimelineManager__Class>(type_info(), "", "RecorderTimelineManager");
        }
        inline app::RecorderTimelineManager* create() {
            return il2cpp::create_object<app::RecorderTimelineManager>(get_class());
        }
    } // namespace RecorderTimelineManager
} // namespace app::classes::types
