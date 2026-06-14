#pragma once
#include <Modloader/app/structs/MoonRenderPipelineDebug_ReflectionStats.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug_ReflectionStats__Boxed.h>
#include <Modloader/app/structs/MoonRenderPipelineDebug_ReflectionStats__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineDebug_ReflectionStats {
        inline app::MoonRenderPipelineDebug_ReflectionStats__Class** type_info() {
            static app::MoonRenderPipelineDebug_ReflectionStats__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonRenderPipelineDebug_ReflectionStats__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonRenderPipelineDebug_ReflectionStats__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineDebug_ReflectionStats__Class>(type_info(), "Moon.Rendering", "MoonRenderPipelineDebug", "ReflectionStats");
        }
        inline app::MoonRenderPipelineDebug_ReflectionStats* create() {
            return il2cpp::create_object<app::MoonRenderPipelineDebug_ReflectionStats>(get_class());
        }
        inline app::MoonRenderPipelineDebug_ReflectionStats__Boxed* box(app::MoonRenderPipelineDebug_ReflectionStats value) {
            return il2cpp::box_value<app::MoonRenderPipelineDebug_ReflectionStats__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderPipelineDebug_ReflectionStats
} // namespace app::classes::types
