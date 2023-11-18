#pragma once
#include <Modloader/app/structs/LightCullingComparer.h>
#include <Modloader/app/structs/LightCullingComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCullingComparer {
        inline app::LightCullingComparer__Class** type_info() {
            static app::LightCullingComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCullingComparer__Class**)(modloader::win::memory::resolve_rva(0x04762AD0));
            }
            return cache;
        }
        inline app::LightCullingComparer__Class* get_class() {
            return il2cpp::get_class<app::LightCullingComparer__Class>(type_info(), "", "LightCullingComparer");
        }
        inline app::LightCullingComparer* create() {
            return il2cpp::create_object<app::LightCullingComparer>(get_class());
        }
    } // namespace LightCullingComparer
} // namespace app::classes::types
