#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTargetIdentifier__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTargetIdentifier__Array__Class** type_info;
        inline app::RenderTargetIdentifier__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTargetIdentifier__Array__Class>(type_info, "UnityEngine.Rendering", "RenderTargetIdentifier[]");
        }
        inline app::RenderTargetIdentifier__Array* create() {
            return il2cpp::create_object<app::RenderTargetIdentifier__Array>(get_class());
        }
        inline app::RenderTargetIdentifier__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTargetIdentifier__Array__Array>(get_class(), size);
        }
    } // namespace RenderTargetIdentifier__Array
} // namespace app::classes::types
