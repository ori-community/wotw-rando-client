#pragma once
#include <Modloader/app/structs/SimpleFPS_VideoPlayerDebugInfo__Array.h>
#include <Modloader/app/structs/SimpleFPS_VideoPlayerDebugInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleFPS_VideoPlayerDebugInfo__Array {
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array__Class** type_info() {
            static app::SimpleFPS_VideoPlayerDebugInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleFPS_VideoPlayerDebugInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleFPS_VideoPlayerDebugInfo__Array__Class>(type_info(), "", "SimpleFPS+VideoPlayerDebugInfo[]");
        }
        inline app::SimpleFPS_VideoPlayerDebugInfo__Array* create() {
            return il2cpp::create_object<app::SimpleFPS_VideoPlayerDebugInfo__Array>(get_class());
        }
    } // namespace SimpleFPS_VideoPlayerDebugInfo__Array
} // namespace app::classes::types
