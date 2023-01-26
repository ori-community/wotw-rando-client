#pragma once
#include <Modloader/app/structs/SimpleFPS_VideoPlayerDebugInfo.h>
#include <Modloader/app/structs/SimpleFPS_VideoPlayerDebugInfo__Array.h>
#include <Modloader/app/structs/SimpleFPS_VideoPlayerDebugInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleFPS_VideoPlayerDebugInfo {
        inline app::SimpleFPS_VideoPlayerDebugInfo__Class** type_info() {
            static app::SimpleFPS_VideoPlayerDebugInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SimpleFPS_VideoPlayerDebugInfo__Class**)(modloader::win::memory::resolve_rva(0x04732EB8));
            }
            return cache;
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleFPS_VideoPlayerDebugInfo__Class>(type_info(), "", "SimpleFPS", "VideoPlayerDebugInfo");
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo* create() {
            return il2cpp::create_object<app::SimpleFPS_VideoPlayerDebugInfo>(get_class());
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SimpleFPS_VideoPlayerDebugInfo__Array>(get_class(), size);
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array* create_array(const std::vector<app::SimpleFPS_VideoPlayerDebugInfo*>& items) {
            return il2cpp::array_new<app::SimpleFPS_VideoPlayerDebugInfo__Array>(get_class(), items);
        }
    } // namespace SimpleFPS_VideoPlayerDebugInfo
} // namespace app::classes::types
