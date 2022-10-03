#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleFPS_VideoPlayerDebugInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleFPS_VideoPlayerDebugInfo__Class** type_info;
        inline app::SimpleFPS_VideoPlayerDebugInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleFPS_VideoPlayerDebugInfo__Class>(type_info, "", "SimpleFPS", "VideoPlayerDebugInfo");
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo* create() {
            return il2cpp::create_object<app::SimpleFPS_VideoPlayerDebugInfo>(get_class());
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleFPS_VideoPlayerDebugInfo__Array>(get_class(), size);
        }
    } // namespace SimpleFPS_VideoPlayerDebugInfo
} // namespace app::classes::types
