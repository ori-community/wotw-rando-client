#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderTimelineManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderTimelineManager__Class** type_info;
        inline app::RecorderTimelineManager__Class* get_class() {
            return il2cpp::get_class<app::RecorderTimelineManager__Class>(type_info, "", "RecorderTimelineManager");
        }
        inline app::RecorderTimelineManager* create() {
            return il2cpp::create_object<app::RecorderTimelineManager>(get_class());
        }
    } // namespace RecorderTimelineManager
} // namespace app::classes::types
