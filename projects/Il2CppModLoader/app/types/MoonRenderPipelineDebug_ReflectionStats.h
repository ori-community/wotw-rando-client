#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebug_ReflectionStats {
        namespace {
            app::MoonRenderPipelineDebug_ReflectionStats__Class* type_info_ref = nullptr;
        }
        app::MoonRenderPipelineDebug_ReflectionStats__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineDebug_ReflectionStats__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebug_ReflectionStats__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineDebug", "ReflectionStats");
        }
        inline app::MoonRenderPipelineDebug_ReflectionStats* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebug_ReflectionStats>(get_class());
        }
        inline app::MoonRenderPipelineDebug_ReflectionStats__Boxed* box(app::MoonRenderPipelineDebug_ReflectionStats value) {
            return il2cpp::box_value<app::MoonRenderPipelineDebug_ReflectionStats__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineDebug_ReflectionStats
} // namespace app::classes::types
