#pragma once
#include <Modloader/app/structs/SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum.h>
#include <Modloader/app/structs/SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum {
        inline app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class** type_info() {
            static app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "SupportedRenderingFeatures", "ReflectionProbeSupportFlags");
        }
        inline app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum* create() {
            return il2cpp::create_object<app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum>(get_class());
        }
    } // namespace SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum
} // namespace app::classes::types
