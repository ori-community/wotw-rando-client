#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _MethodBase {
        namespace {
            app::_MethodBase__Class* type_info_ref = nullptr;
        }
        app::_MethodBase__Class** type_info = &type_info_ref;
        inline app::_MethodBase__Class* get_class() {
            return il2cpp::get_class<app::_MethodBase__Class>(type_info, "System.Runtime.InteropServices", "_MethodBase");
        }
        inline app::_MethodBase* create() {
            return il2cpp::create_object<app::_MethodBase>(get_class());
        }
    } // namespace _MethodBase
} // namespace app::classes::types
