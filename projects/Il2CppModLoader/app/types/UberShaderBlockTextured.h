#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderBlockTextured {
        inline app::UberShaderBlockTextured__Class** type_info = (app::UberShaderBlockTextured__Class**)(modloader::win::memory::resolve_rva(0x04719C10));
        inline app::UberShaderBlockTextured__Class* get_class() {
            return il2cpp::get_class<app::UberShaderBlockTextured__Class>(type_info, "", "UberShaderBlockTextured");
        }
        inline app::UberShaderBlockTextured* create() {
            return il2cpp::create_object<app::UberShaderBlockTextured>(get_class());
        }
    } // namespace UberShaderBlockTextured
} // namespace app::classes::types
