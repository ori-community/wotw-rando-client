#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DroppedFrameMonitor__Class** type_info;
        inline app::DroppedFrameMonitor__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitor__Class>(type_info, "", "DroppedFrameMonitor");
        }
        inline app::DroppedFrameMonitor* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor>(get_class());
        }
    } // namespace DroppedFrameMonitor
} // namespace app::classes::types
