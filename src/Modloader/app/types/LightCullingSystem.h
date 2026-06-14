#pragma once
#include <Modloader/app/structs/LightCullingSystem.h>
#include <Modloader/app/structs/LightCullingSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem {
        inline app::LightCullingSystem__Class** type_info() {
            static app::LightCullingSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCullingSystem__Class**)(modloader::win::memory::resolve_rva(0x04792440));
            }
            return cache;
        }
        inline app::LightCullingSystem__Class* get_class() {
            return il2cpp::get_class<app::LightCullingSystem__Class>(type_info(), "", "LightCullingSystem");
        }
        inline app::LightCullingSystem* create() {
            return il2cpp::create_object<app::LightCullingSystem>(get_class());
        }
    } // namespace LightCullingSystem
} // namespace app::classes::types
