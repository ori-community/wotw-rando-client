#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderMainTexture {
        inline app::UberShaderMainTexture__Class** type_info = (app::UberShaderMainTexture__Class**)(modloader::win::memory::resolve_rva(0x047660C8));
        inline app::UberShaderMainTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderMainTexture__Class>(type_info, "", "UberShaderMainTexture");
        }
        inline app::UberShaderMainTexture* create() {
            return il2cpp::create_object<app::UberShaderMainTexture>(get_class());
        }
    } // namespace UberShaderMainTexture
} // namespace app::classes::types
