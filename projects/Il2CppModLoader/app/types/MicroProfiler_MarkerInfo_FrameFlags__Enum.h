#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler_MarkerInfo_FrameFlags__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class** type_info;
        inline app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MicroProfiler_MarkerInfo_FrameFlags__Enum__Class>(type_info, "", "MicroProfiler+MarkerInfo", "FrameFlags");
        }
        inline app::MicroProfiler_MarkerInfo_FrameFlags__Enum* create() {
            return il2cpp::create_object<app::MicroProfiler_MarkerInfo_FrameFlags__Enum>(get_class());
        }
    } // namespace MicroProfiler_MarkerInfo_FrameFlags__Enum
} // namespace app::classes::types
