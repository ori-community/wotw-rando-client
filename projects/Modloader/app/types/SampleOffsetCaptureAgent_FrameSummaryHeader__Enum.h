#pragma once
#include <Modloader/app/structs/SampleOffsetCaptureAgent_FrameSummaryHeader__Enum.h>
#include <Modloader/app/structs/SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SampleOffsetCaptureAgent_FrameSummaryHeader__Enum {
        inline app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class** type_info() {
            static app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class>(type_info(), "", "SampleOffsetCaptureAgent", "FrameSummaryHeader");
        }
        inline app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum* create() {
            return il2cpp::create_object<app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum>(get_class());
        }
    } // namespace SampleOffsetCaptureAgent_FrameSummaryHeader__Enum
} // namespace app::classes::types
