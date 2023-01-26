#pragma once
#include <Modloader/app/structs/_Module.h>
#include <Modloader/app/structs/_Module__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _Module {
        inline app::_Module__Class** type_info() {
            static app::_Module__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_Module__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_Module__Class* get_class() {
            return il2cpp::get_class<app::_Module__Class>(type_info(), "System.Runtime.InteropServices", "_Module");
        }
    } // namespace _Module
} // namespace app::classes::types
