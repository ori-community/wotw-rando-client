#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeRenderOrder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderRuntimeRenderOrder__Class** type_info;
        inline app::UberShaderRuntimeRenderOrder__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeRenderOrder__Class>(type_info, "", "UberShaderRuntimeRenderOrder");
        }
        inline app::UberShaderRuntimeRenderOrder* create() {
            return il2cpp::create_object<app::UberShaderRuntimeRenderOrder>(get_class());
        }
    } // namespace UberShaderRuntimeRenderOrder
} // namespace app::classes::types
