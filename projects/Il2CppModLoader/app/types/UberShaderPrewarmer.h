#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderPrewarmer {
        inline app::UberShaderPrewarmer__Class** type_info = (app::UberShaderPrewarmer__Class**)(modloader::win::memory::resolve_rva(0x04723C58));
        inline app::UberShaderPrewarmer__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrewarmer__Class>(type_info, "", "UberShaderPrewarmer");
        }
        inline app::UberShaderPrewarmer* create() {
            return il2cpp::create_object<app::UberShaderPrewarmer>(get_class());
        }
    } // namespace UberShaderPrewarmer
} // namespace app::classes::types
