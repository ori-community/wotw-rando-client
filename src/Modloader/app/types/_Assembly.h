#pragma once
#include <Modloader/app/structs/_Assembly.h>
#include <Modloader/app/structs/_Assembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Assembly {
        inline app::_Assembly__Class** type_info() {
            static app::_Assembly__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_Assembly__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_Assembly__Class* get_class() {
            return il2cpp::get_class<app::_Assembly__Class>(type_info(), "System.Runtime.InteropServices", "_Assembly");
        }
    } // namespace _Assembly
} // namespace app::classes::types
