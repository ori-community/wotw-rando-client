#pragma once
#include <Modloader/app/structs/_Thread.h>
#include <Modloader/app/structs/_Thread__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Thread {
        inline app::_Thread__Class** type_info() {
            static app::_Thread__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_Thread__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_Thread__Class* get_class() {
            return il2cpp::get_class<app::_Thread__Class>(type_info(), "System.Runtime.InteropServices", "_Thread");
        }
    } // namespace _Thread
} // namespace app::classes::types
