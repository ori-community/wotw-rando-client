#pragma once
#include <Modloader/app/structs/SceneDataCaptureAgent.h>
#include <Modloader/app/structs/SceneDataCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneDataCaptureAgent {
        inline app::SceneDataCaptureAgent__Class** type_info() {
            static app::SceneDataCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04739500));
            }
            return cache;
        }
        inline app::SceneDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SceneDataCaptureAgent__Class>(type_info(), "", "SceneDataCaptureAgent");
        }
        inline app::SceneDataCaptureAgent* create() {
            return il2cpp::create_object<app::SceneDataCaptureAgent>(get_class());
        }
    } // namespace SceneDataCaptureAgent
} // namespace app::classes::types
