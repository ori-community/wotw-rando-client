#pragma once
#include <Modloader/app/structs/LightProbeProxyVolume.h>
#include <Modloader/app/structs/LightProbeProxyVolume__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightProbeProxyVolume {
        inline app::LightProbeProxyVolume__Class** type_info() {
            static app::LightProbeProxyVolume__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightProbeProxyVolume__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightProbeProxyVolume__Class* get_class() {
            return il2cpp::get_class<app::LightProbeProxyVolume__Class>(type_info(), "UnityEngine", "LightProbeProxyVolume");
        }
        inline app::LightProbeProxyVolume* create() {
            return il2cpp::create_object<app::LightProbeProxyVolume>(get_class());
        }
    } // namespace LightProbeProxyVolume
} // namespace app::classes::types
