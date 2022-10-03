#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderRange {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderRange__Class** type_info;
        inline app::UberShaderRange__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRange__Class>(type_info, "", "UberShaderRange");
        }
        inline app::UberShaderRange* create() {
            return il2cpp::create_object<app::UberShaderRange>(get_class());
        }
    } // namespace UberShaderRange
} // namespace app::classes::types
