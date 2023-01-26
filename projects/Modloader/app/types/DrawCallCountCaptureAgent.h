#pragma once
#include <Modloader/app/structs/DrawCallCountCaptureAgent.h>
#include <Modloader/app/structs/DrawCallCountCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrawCallCountCaptureAgent {
        inline app::DrawCallCountCaptureAgent__Class** type_info() {
            static app::DrawCallCountCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DrawCallCountCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x0476ABF8));
            }
            return cache;
        }
        inline app::DrawCallCountCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::DrawCallCountCaptureAgent__Class>(type_info(), "", "DrawCallCountCaptureAgent");
        }
        inline app::DrawCallCountCaptureAgent* create() {
            return il2cpp::create_object<app::DrawCallCountCaptureAgent>(get_class());
        }
    } // namespace DrawCallCountCaptureAgent
} // namespace app::classes::types
