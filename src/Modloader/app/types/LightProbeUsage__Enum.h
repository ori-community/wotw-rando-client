#pragma once
#include <Modloader/app/structs/LightProbeUsage__Enum.h>
#include <Modloader/app/structs/LightProbeUsage__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightProbeUsage__Enum {
        inline app::LightProbeUsage__Enum__Class** type_info() {
            static app::LightProbeUsage__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightProbeUsage__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightProbeUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightProbeUsage__Enum__Class>(type_info(), "UnityEngine.Rendering", "LightProbeUsage");
        }
        inline app::LightProbeUsage__Enum* create() {
            return il2cpp::create_object<app::LightProbeUsage__Enum>(get_class());
        }
    } // namespace LightProbeUsage__Enum
} // namespace app::classes::types
