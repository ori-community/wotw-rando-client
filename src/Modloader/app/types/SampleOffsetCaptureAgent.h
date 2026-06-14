#pragma once
#include <Modloader/app/structs/SampleOffsetCaptureAgent.h>
#include <Modloader/app/structs/SampleOffsetCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SampleOffsetCaptureAgent {
        inline app::SampleOffsetCaptureAgent__Class** type_info() {
            static app::SampleOffsetCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SampleOffsetCaptureAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SampleOffsetCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::SampleOffsetCaptureAgent__Class>(type_info(), "", "SampleOffsetCaptureAgent");
        }
        inline app::SampleOffsetCaptureAgent* create() {
            return il2cpp::create_object<app::SampleOffsetCaptureAgent>(get_class());
        }
    } // namespace SampleOffsetCaptureAgent
} // namespace app::classes::types
