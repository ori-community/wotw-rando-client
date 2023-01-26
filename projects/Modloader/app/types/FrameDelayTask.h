#pragma once
#include <Modloader/app/structs/FrameDelayTask.h>
#include <Modloader/app/structs/FrameDelayTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameDelayTask {
        inline app::FrameDelayTask__Class** type_info() {
            static app::FrameDelayTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameDelayTask__Class**)(modloader::win::memory::resolve_rva(0x0473B8D8));
            }
            return cache;
        }
        inline app::FrameDelayTask__Class* get_class() {
            return il2cpp::get_class<app::FrameDelayTask__Class>(type_info(), "Moon.ArtOptimization", "FrameDelayTask");
        }
        inline app::FrameDelayTask* create() {
            return il2cpp::create_object<app::FrameDelayTask>(get_class());
        }
    } // namespace FrameDelayTask
} // namespace app::classes::types
