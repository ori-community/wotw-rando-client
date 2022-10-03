#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostProcessRenderContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PostProcessRenderContext__Class** type_info;
        inline app::PostProcessRenderContext__Class* get_class() {
            return il2cpp::get_class<app::PostProcessRenderContext__Class>(type_info, "", "PostProcessRenderContext");
        }
        inline app::PostProcessRenderContext* create() {
            return il2cpp::create_object<app::PostProcessRenderContext>(get_class());
        }
    } // namespace PostProcessRenderContext
} // namespace app::classes::types
