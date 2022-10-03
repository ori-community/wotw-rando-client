#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FpsTcTestOutput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FpsTcTestOutput__Class** type_info;
        inline app::FpsTcTestOutput__Class* get_class() {
            return il2cpp::get_class<app::FpsTcTestOutput__Class>(type_info, "", "FpsTcTestOutput");
        }
        inline app::FpsTcTestOutput* create() {
            return il2cpp::create_object<app::FpsTcTestOutput>(get_class());
        }
    } // namespace FpsTcTestOutput
} // namespace app::classes::types
