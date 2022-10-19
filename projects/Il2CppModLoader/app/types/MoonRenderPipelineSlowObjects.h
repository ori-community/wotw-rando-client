#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderPipelineSlowObjects {
        namespace {
            inline app::MoonRenderPipelineSlowObjects__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderPipelineSlowObjects__Class** type_info = &type_info_ref;
        inline app::MoonRenderPipelineSlowObjects__Class* get_class() {
            return il2cpp::get_class<app::MoonRenderPipelineSlowObjects__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineSlowObjects");
        }
        inline app::MoonRenderPipelineSlowObjects* create() {
            return il2cpp::create_object<app::MoonRenderPipelineSlowObjects>(get_class());
        }
    } // namespace MoonRenderPipelineSlowObjects
} // namespace app::classes::types
