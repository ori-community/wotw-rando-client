#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_MethodInfo__Class.h>

namespace app::classes::types {
    namespace _MethodInfo {
        namespace {
            inline app::_MethodInfo__Class* type_info_ref = nullptr;
        }
        inline app::_MethodInfo__Class** type_info = &type_info_ref;
        inline app::_MethodInfo__Class* get_class() {
            return il2cpp::get_class<app::_MethodInfo__Class>(type_info, "System.Runtime.InteropServices", "_MethodInfo");
        }
    } // namespace _MethodInfo
} // namespace app::classes::types
