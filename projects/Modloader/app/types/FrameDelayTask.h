#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrameDelayTask {
        inline app::FrameDelayTask__Class** type_info = (app::FrameDelayTask__Class**)(modloader::win::memory::resolve_rva(0x0473B8D8));
        inline app::FrameDelayTask__Class* get_class() {
            return il2cpp::get_class<app::FrameDelayTask__Class>(type_info, "Moon.ArtOptimization", "FrameDelayTask");
        }
        inline app::FrameDelayTask* create() {
            return il2cpp::create_object<app::FrameDelayTask>(get_class());
        }
    } // namespace FrameDelayTask
} // namespace app::classes::types
