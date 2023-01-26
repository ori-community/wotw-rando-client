#pragma once
#include <Modloader/app/structs/_Activator.h>
#include <Modloader/app/structs/_Activator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Activator {
        inline app::_Activator__Class** type_info() {
            static app::_Activator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_Activator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_Activator__Class* get_class() {
            return il2cpp::get_class<app::_Activator__Class>(type_info(), "System.Runtime.InteropServices", "_Activator");
        }
    } // namespace _Activator
} // namespace app::classes::types
