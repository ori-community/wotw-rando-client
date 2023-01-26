#pragma once
#include <Modloader/app/structs/SceneLoadingCaptureAgent.h>
#include <Modloader/app/structs/SceneLoadingCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneLoadingCaptureAgent {
        inline app::SceneLoadingCaptureAgent__Class** type_info() {
            static app::SceneLoadingCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SceneLoadingCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0470CE90));
            }
            return cache;
        }
        inline app::SceneLoadingCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingCaptureAgent__Class>(type_info(), "", "SceneLoadingCaptureAgent");
        }
        inline app::SceneLoadingCaptureAgent* create() {
            return il2cpp::create_object<app::SceneLoadingCaptureAgent>(get_class());
        }
    } // namespace SceneLoadingCaptureAgent
} // namespace app::classes::types
