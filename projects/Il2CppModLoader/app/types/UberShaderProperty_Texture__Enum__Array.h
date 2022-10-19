#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderProperty_Texture__Enum__Array {
        inline app::UberShaderProperty_Texture__Enum__Array__Class** type_info = (app::UberShaderProperty_Texture__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0477DDA8));
        inline app::UberShaderProperty_Texture__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperty_Texture__Enum__Array__Class>(type_info, "", "UberShaderProperty_Texture[]");
        }
        inline app::UberShaderProperty_Texture__Enum__Array* create() {
            return il2cpp::create_object<app::UberShaderProperty_Texture__Enum__Array>(get_class());
        }
    } // namespace UberShaderProperty_Texture__Enum__Array
} // namespace app::classes::types
