#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _MemberInfo {
        namespace {
            inline app::_MemberInfo__Class* type_info_ref = nullptr;
        }
        inline app::_MemberInfo__Class** type_info = &type_info_ref;
        inline app::_MemberInfo__Class* get_class() {
            return il2cpp::get_class<app::_MemberInfo__Class>(type_info, "System.Runtime.InteropServices", "_MemberInfo");
        }
    } // namespace _MemberInfo
} // namespace app::classes::types
