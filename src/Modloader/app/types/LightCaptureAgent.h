#pragma once
#include <Modloader/app/structs/LightCaptureAgent.h>
#include <Modloader/app/structs/LightCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCaptureAgent {
        inline app::LightCaptureAgent__Class** type_info() {
            static app::LightCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0475A750));
            }
            return cache;
        }
        inline app::LightCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::LightCaptureAgent__Class>(type_info(), "", "LightCaptureAgent");
        }
        inline app::LightCaptureAgent* create() {
            return il2cpp::create_object<app::LightCaptureAgent>(get_class());
        }
    } // namespace LightCaptureAgent
} // namespace app::classes::types
