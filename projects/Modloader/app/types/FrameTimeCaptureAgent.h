#pragma once
#include <Modloader/app/structs/FrameTimeCaptureAgent.h>
#include <Modloader/app/structs/FrameTimeCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrameTimeCaptureAgent {
        inline app::FrameTimeCaptureAgent__Class** type_info() {
            static app::FrameTimeCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FrameTimeCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04791448));
            }
            return cache;
        }
        inline app::FrameTimeCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::FrameTimeCaptureAgent__Class>(type_info(), "", "FrameTimeCaptureAgent");
        }
        inline app::FrameTimeCaptureAgent* create() {
            return il2cpp::create_object<app::FrameTimeCaptureAgent>(get_class());
        }
    } // namespace FrameTimeCaptureAgent
} // namespace app::classes::types
