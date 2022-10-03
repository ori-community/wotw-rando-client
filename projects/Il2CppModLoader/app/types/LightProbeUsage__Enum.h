#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightProbeUsage__Enum {
        namespace {
            app::LightProbeUsage__Enum__Class* type_info_ref = nullptr;
        }
        app::LightProbeUsage__Enum__Class** type_info = &type_info_ref;
        inline app::LightProbeUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightProbeUsage__Enum__Class>(type_info, "UnityEngine.Rendering", "LightProbeUsage");
        }
        inline app::LightProbeUsage__Enum* create() {
            return il2cpp::create_object<app::LightProbeUsage__Enum>(get_class());
        }
    } // namespace LightProbeUsage__Enum
} // namespace app::classes::types
