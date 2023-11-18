#pragma once
#include <Modloader/app/structs/_Type.h>
#include <Modloader/app/structs/_Type__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Type {
        inline app::_Type__Class** type_info() {
            static app::_Type__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_Type__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_Type__Class* get_class() {
            return il2cpp::get_class<app::_Type__Class>(type_info(), "System.Runtime.InteropServices", "_Type");
        }
    } // namespace _Type
} // namespace app::classes::types
