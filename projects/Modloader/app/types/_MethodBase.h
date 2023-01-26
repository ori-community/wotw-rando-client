#pragma once
#include <Modloader/app/structs/_MethodBase.h>
#include <Modloader/app/structs/_MethodBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _MethodBase {
        inline app::_MethodBase__Class** type_info() {
            static app::_MethodBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_MethodBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_MethodBase__Class* get_class() {
            return il2cpp::get_class<app::_MethodBase__Class>(type_info(), "System.Runtime.InteropServices", "_MethodBase");
        }
    } // namespace _MethodBase
} // namespace app::classes::types
