#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderGradient {
        namespace {
            inline app::UberShaderGradient__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderGradient__Class** type_info = &type_info_ref;
        inline app::UberShaderGradient__Class* get_class() {
            return il2cpp::get_class<app::UberShaderGradient__Class>(type_info, "", "UberShaderGradient");
        }
        inline app::UberShaderGradient* create() {
            return il2cpp::create_object<app::UberShaderGradient>(get_class());
        }
    } // namespace UberShaderGradient
} // namespace app::classes::types
