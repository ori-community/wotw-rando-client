#pragma once
#include <Modloader/app/structs/_PropertyInfo.h>
#include <Modloader/app/structs/_PropertyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PropertyInfo {
        inline app::_PropertyInfo__Class** type_info() {
            static app::_PropertyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PropertyInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PropertyInfo__Class* get_class() {
            return il2cpp::get_class<app::_PropertyInfo__Class>(type_info(), "System.Runtime.InteropServices", "_PropertyInfo");
        }
    } // namespace _PropertyInfo
} // namespace app::classes::types
