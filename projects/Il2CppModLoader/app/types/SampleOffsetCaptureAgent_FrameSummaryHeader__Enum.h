#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SampleOffsetCaptureAgent_FrameSummaryHeader__Enum {
        namespace {
            inline app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class** type_info = &type_info_ref;
        inline app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum__Class>(type_info, "", "SampleOffsetCaptureAgent", "FrameSummaryHeader");
        }
        inline app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum* create() {
            return il2cpp::create_object<app::SampleOffsetCaptureAgent_FrameSummaryHeader__Enum>(get_class());
        }
    } // namespace SampleOffsetCaptureAgent_FrameSummaryHeader__Enum
} // namespace app::classes::types
