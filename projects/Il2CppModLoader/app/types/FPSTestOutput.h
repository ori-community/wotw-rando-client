#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSTestOutput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSTestOutput__Class** type_info;
        inline app::FPSTestOutput__Class* get_class() {
            return il2cpp::get_class<app::FPSTestOutput__Class>(type_info, "", "FPSTestOutput");
        }
        inline app::FPSTestOutput* create() {
            return il2cpp::create_object<app::FPSTestOutput>(get_class());
        }
    } // namespace FPSTestOutput
} // namespace app::classes::types
