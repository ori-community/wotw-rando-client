#pragma once
#include <Modloader/app/structs/_FieldInfo.h>
#include <Modloader/app/structs/_FieldInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _FieldInfo {
        inline app::_FieldInfo__Class** type_info() {
            static app::_FieldInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_FieldInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_FieldInfo__Class* get_class() {
            return il2cpp::get_class<app::_FieldInfo__Class>(type_info(), "System.Runtime.InteropServices", "_FieldInfo");
        }
    } // namespace _FieldInfo
} // namespace app::classes::types
