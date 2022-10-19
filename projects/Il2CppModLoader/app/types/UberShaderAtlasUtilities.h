#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderAtlasUtilities {
        inline app::UberShaderAtlasUtilities__Class** type_info = (app::UberShaderAtlasUtilities__Class**)(modloader::win::memory::resolve_rva(0x0475F878));
        inline app::UberShaderAtlasUtilities__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasUtilities__Class>(type_info, "", "UberShaderAtlasUtilities");
        }
        inline app::UberShaderAtlasUtilities* create() {
            return il2cpp::create_object<app::UberShaderAtlasUtilities>(get_class());
        }
    } // namespace UberShaderAtlasUtilities
} // namespace app::classes::types
