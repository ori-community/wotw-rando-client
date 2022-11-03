#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightProbeProxyVolume {
        namespace {
            inline app::LightProbeProxyVolume__Class* type_info_ref = nullptr;
        }
        inline app::LightProbeProxyVolume__Class** type_info = &type_info_ref;
        inline app::LightProbeProxyVolume__Class* get_class() {
            return il2cpp::get_class<app::LightProbeProxyVolume__Class>(type_info, "UnityEngine", "LightProbeProxyVolume");
        }
        inline app::LightProbeProxyVolume* create() {
            return il2cpp::create_object<app::LightProbeProxyVolume>(get_class());
        }
    } // namespace LightProbeProxyVolume
} // namespace app::classes::types
