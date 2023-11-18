#pragma once
#include <Modloader/app/structs/_EventInfo.h>
#include <Modloader/app/structs/_EventInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _EventInfo {
        inline app::_EventInfo__Class** type_info() {
            static app::_EventInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_EventInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_EventInfo__Class* get_class() {
            return il2cpp::get_class<app::_EventInfo__Class>(type_info(), "System.Runtime.InteropServices", "_EventInfo");
        }
    } // namespace _EventInfo
} // namespace app::classes::types
