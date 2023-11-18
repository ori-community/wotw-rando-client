#pragma once
#include <Modloader/app/structs/_MemberInfo.h>
#include <Modloader/app/structs/_MemberInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _MemberInfo {
        inline app::_MemberInfo__Class** type_info() {
            static app::_MemberInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_MemberInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_MemberInfo__Class* get_class() {
            return il2cpp::get_class<app::_MemberInfo__Class>(type_info(), "System.Runtime.InteropServices", "_MemberInfo");
        }
    } // namespace _MemberInfo
} // namespace app::classes::types
