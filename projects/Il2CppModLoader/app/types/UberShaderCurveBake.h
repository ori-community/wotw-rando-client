#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderCurveBake {
        inline app::UberShaderCurveBake__Class** type_info = (app::UberShaderCurveBake__Class**)(modloader::win::memory::resolve_rva(0x0474F090));
        inline app::UberShaderCurveBake__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCurveBake__Class>(type_info, "", "UberShaderCurveBake");
        }
        inline app::UberShaderCurveBake* create() {
            return il2cpp::create_object<app::UberShaderCurveBake>(get_class());
        }
    } // namespace UberShaderCurveBake
} // namespace app::classes::types
