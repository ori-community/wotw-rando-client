#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneDataCaptureAgent {
        inline app::SceneDataCaptureAgent__Class** type_info = (app::SceneDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04739500));
        inline app::SceneDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SceneDataCaptureAgent__Class>(type_info, "", "SceneDataCaptureAgent");
        }
        inline app::SceneDataCaptureAgent* create() {
            return il2cpp::create_object<app::SceneDataCaptureAgent>(get_class());
        }
    } // namespace SceneDataCaptureAgent
} // namespace app::classes::types
