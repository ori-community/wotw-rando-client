#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _Module {
        namespace {
            app::_Module__Class* type_info_ref = nullptr;
        }
        app::_Module__Class** type_info = &type_info_ref;
        inline app::_Module__Class* get_class() {
            return il2cpp::get_class<app::_Module__Class>(type_info, "System.Runtime.InteropServices", "_Module");
        }
    } // namespace _Module
} // namespace app::classes::types
