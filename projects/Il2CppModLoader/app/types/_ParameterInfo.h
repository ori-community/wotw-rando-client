#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _ParameterInfo {
        namespace {
            app::_ParameterInfo__Class* type_info_ref = nullptr;
        }
        app::_ParameterInfo__Class** type_info = &type_info_ref;
        inline app::_ParameterInfo__Class* get_class() {
            return il2cpp::get_class<app::_ParameterInfo__Class>(type_info, "System.Runtime.InteropServices", "_ParameterInfo");
        }
    } // namespace _ParameterInfo
} // namespace app::classes::types
