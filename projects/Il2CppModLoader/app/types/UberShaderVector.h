#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderVector {
        inline app::UberShaderVector__Class** type_info = (app::UberShaderVector__Class**)(modloader::win::memory::resolve_rva(0x0473D098));
        inline app::UberShaderVector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVector__Class>(type_info, "", "UberShaderVector");
        }
        inline app::UberShaderVector* create() {
            return il2cpp::create_object<app::UberShaderVector>(get_class());
        }
    } // namespace UberShaderVector
} // namespace app::classes::types
