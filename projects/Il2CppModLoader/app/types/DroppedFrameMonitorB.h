#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitorB {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DroppedFrameMonitorB__Class** type_info;
        inline app::DroppedFrameMonitorB__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitorB__Class>(type_info, "", "DroppedFrameMonitorB");
        }
        inline app::DroppedFrameMonitorB* create() {
            return il2cpp::create_object<app::DroppedFrameMonitorB>(get_class());
        }
    } // namespace DroppedFrameMonitorB
} // namespace app::classes::types
