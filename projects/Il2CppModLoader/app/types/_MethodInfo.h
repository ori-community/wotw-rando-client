#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _MethodInfo {
        namespace {
            app::_MethodInfo__Class* type_info_ref = nullptr;
        }
        app::_MethodInfo__Class** type_info = &type_info_ref;
        inline app::_MethodInfo__Class* get_class() {
            return il2cpp::get_class<app::_MethodInfo__Class>(type_info, "System.Runtime.InteropServices", "_MethodInfo");
        }
        inline app::_MethodInfo* create() {
            return il2cpp::create_object<app::_MethodInfo>(get_class());
        }
    } // namespace _MethodInfo
} // namespace app::classes::types
