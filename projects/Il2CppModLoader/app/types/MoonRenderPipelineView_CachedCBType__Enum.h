#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonRenderPipelineView_CachedCBType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonRenderPipelineView_CachedCBType__Enum__Class** type_info;
        inline app::MoonRenderPipelineView_CachedCBType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderPipelineView_CachedCBType__Enum__Class>(type_info, "Moon.Rendering", "MoonRenderPipelineView", "CachedCBType");
        }
        inline app::MoonRenderPipelineView_CachedCBType__Enum* create() {
            return il2cpp::create_object<app::MoonRenderPipelineView_CachedCBType__Enum>(get_class());
        }
    } // namespace MoonRenderPipelineView_CachedCBType__Enum
} // namespace app::classes::types
