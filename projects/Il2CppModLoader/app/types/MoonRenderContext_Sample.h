#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonRenderContext_Sample {
        namespace {
            inline app::MoonRenderContext_Sample__Class* type_info_ref = nullptr;
        }
        inline app::MoonRenderContext_Sample__Class** type_info = &type_info_ref;
        inline app::MoonRenderContext_Sample__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonRenderContext_Sample__Class>(type_info, "Moon.Rendering", "MoonRenderContext", "Sample");
        }
        inline app::MoonRenderContext_Sample* create() {
            return il2cpp::create_object<app::MoonRenderContext_Sample>(get_class());
        }
        inline app::MoonRenderContext_Sample__Boxed* box(app::MoonRenderContext_Sample value) {
            return il2cpp::box_value<app::MoonRenderContext_Sample__Boxed>(get_class(), value);
        }
    } // namespace MoonRenderContext_Sample
} // namespace app::classes::types
