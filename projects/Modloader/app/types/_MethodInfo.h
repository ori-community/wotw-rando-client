#pragma once
#include <Modloader/app/structs/_MethodInfo.h>
#include <Modloader/app/structs/_MethodInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _MethodInfo {
        inline app::_MethodInfo__Class** type_info() {
            static app::_MethodInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_MethodInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_MethodInfo__Class* get_class() {
            return il2cpp::get_class<app::_MethodInfo__Class>(type_info(), "System.Runtime.InteropServices", "_MethodInfo");
        }
    } // namespace _MethodInfo
} // namespace app::classes::types
