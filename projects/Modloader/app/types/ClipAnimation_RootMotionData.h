#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClipAnimation_RootMotionData {
        inline app::ClipAnimation_RootMotionData__Class** type_info = (app::ClipAnimation_RootMotionData__Class**)(modloader::win::memory::resolve_rva(0x047543A0));
        inline app::ClipAnimation_RootMotionData__Class* get_class() {
            return il2cpp::get_nested_class<app::ClipAnimation_RootMotionData__Class>(type_info, "Moon", "ClipAnimation", "RootMotionData");
        }
        inline app::ClipAnimation_RootMotionData* create() {
            return il2cpp::create_object<app::ClipAnimation_RootMotionData>(get_class());
        }
    } // namespace ClipAnimation_RootMotionData
} // namespace app::classes::types
