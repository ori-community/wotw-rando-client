#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderRange {
        inline app::UberShaderRange__Class** type_info = (app::UberShaderRange__Class**)(modloader::win::memory::resolve_rva(0x047180C0));
        inline app::UberShaderRange__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRange__Class>(type_info, "", "UberShaderRange");
        }
        inline app::UberShaderRange* create() {
            return il2cpp::create_object<app::UberShaderRange>(get_class());
        }
    } // namespace UberShaderRange
} // namespace app::classes::types
