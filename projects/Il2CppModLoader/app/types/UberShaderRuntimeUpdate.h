#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeUpdate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderRuntimeUpdate__Class** type_info;
        inline app::UberShaderRuntimeUpdate__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeUpdate__Class>(type_info, "", "UberShaderRuntimeUpdate");
        }
        inline app::UberShaderRuntimeUpdate* create() {
            return il2cpp::create_object<app::UberShaderRuntimeUpdate>(get_class());
        }
    } // namespace UberShaderRuntimeUpdate
} // namespace app::classes::types
