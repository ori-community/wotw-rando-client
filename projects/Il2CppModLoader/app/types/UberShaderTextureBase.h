#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderTextureBase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderTextureBase__Class** type_info;
        inline app::UberShaderTextureBase__Class* get_class() {
            return il2cpp::get_class<app::UberShaderTextureBase__Class>(type_info, "", "UberShaderTextureBase");
        }
        inline app::UberShaderTextureBase* create() {
            return il2cpp::create_object<app::UberShaderTextureBase>(get_class());
        }
    } // namespace UberShaderTextureBase
} // namespace app::classes::types
