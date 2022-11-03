#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _MethodBase {
        namespace {
            inline app::_MethodBase__Class* type_info_ref = nullptr;
        }
        inline app::_MethodBase__Class** type_info = &type_info_ref;
        inline app::_MethodBase__Class* get_class() {
            return il2cpp::get_class<app::_MethodBase__Class>(type_info, "System.Runtime.InteropServices", "_MethodBase");
        }
    } // namespace _MethodBase
} // namespace app::classes::types
