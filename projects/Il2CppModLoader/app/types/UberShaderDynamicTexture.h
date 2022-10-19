#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderDynamicTexture {
        namespace {
            inline app::UberShaderDynamicTexture__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderDynamicTexture__Class** type_info = &type_info_ref;
        inline app::UberShaderDynamicTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDynamicTexture__Class>(type_info, "", "UberShaderDynamicTexture");
        }
        inline app::UberShaderDynamicTexture* create() {
            return il2cpp::create_object<app::UberShaderDynamicTexture>(get_class());
        }
    } // namespace UberShaderDynamicTexture
} // namespace app::classes::types
