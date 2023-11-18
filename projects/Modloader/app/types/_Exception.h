#pragma once
#include <Modloader/app/structs/_Exception.h>
#include <Modloader/app/structs/_Exception__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Exception {
        inline app::_Exception__Class** type_info() {
            static app::_Exception__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_Exception__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_Exception__Class* get_class() {
            return il2cpp::get_class<app::_Exception__Class>(type_info(), "System.Runtime.InteropServices", "_Exception");
        }
    } // namespace _Exception
} // namespace app::classes::types
