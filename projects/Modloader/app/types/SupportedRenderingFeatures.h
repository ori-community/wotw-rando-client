#pragma once
#include <Modloader/app/structs/SupportedRenderingFeatures.h>
#include <Modloader/app/structs/SupportedRenderingFeatures__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SupportedRenderingFeatures {
        inline app::SupportedRenderingFeatures__Class** type_info() {
            static app::SupportedRenderingFeatures__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SupportedRenderingFeatures__Class**)(modloader::win::memory::resolve_rva(0x047482E8));
            }
            return cache;
        }
        inline app::SupportedRenderingFeatures__Class* get_class() {
            return il2cpp::get_class<app::SupportedRenderingFeatures__Class>(type_info(), "UnityEngine.Experimental.Rendering", "SupportedRenderingFeatures");
        }
        inline app::SupportedRenderingFeatures* create() {
            return il2cpp::create_object<app::SupportedRenderingFeatures>(get_class());
        }
    } // namespace SupportedRenderingFeatures
} // namespace app::classes::types
