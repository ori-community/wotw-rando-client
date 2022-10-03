#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderDetector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderDetector__Class** type_info;
        inline app::UberShaderDetector__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDetector__Class>(type_info, "", "UberShaderDetector");
        }
        inline app::UberShaderDetector* create() {
            return il2cpp::create_object<app::UberShaderDetector>(get_class());
        }
    } // namespace UberShaderDetector
} // namespace app::classes::types
