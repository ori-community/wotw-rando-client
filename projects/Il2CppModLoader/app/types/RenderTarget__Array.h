#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTarget__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTarget__Array__Class** type_info;
        inline app::RenderTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTarget__Array__Class>(type_info, "Moon.Rendering", "RenderTarget[]");
        }
        inline app::RenderTarget__Array* create() {
            return il2cpp::create_object<app::RenderTarget__Array>(get_class());
        }
    } // namespace RenderTarget__Array
} // namespace app::classes::types
