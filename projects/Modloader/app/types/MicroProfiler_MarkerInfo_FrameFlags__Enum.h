#pragma once
#include <Modloader/app/structs/MicroProfiler_MarkerInfo_FrameFlags__Enum.h>
#include <Modloader/app/structs/MicroProfiler_MarkerInfo_FrameFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_MarkerInfo_FrameFlags__Enum {
        inline app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class** type_info() {
            static app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x047605C0));
            }
            return cache;
        }
        inline app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class>(type_info(), "", "MicroProfiler+MarkerInfo", "FrameFlags");
        }
        inline app::MicroProfiler_MarkerInfo_FrameFlags__Enum* create() {
            return il2cpp::create_object<app::MicroProfiler_MarkerInfo_FrameFlags__Enum>(get_class());
        }
    } // namespace MicroProfiler_MarkerInfo_FrameFlags__Enum
} // namespace app::classes::types
