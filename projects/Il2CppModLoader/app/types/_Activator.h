#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _Activator {
        namespace {
            app::_Activator__Class* type_info_ref = nullptr;
        }
        app::_Activator__Class** type_info = &type_info_ref;
        inline app::_Activator__Class* get_class() {
            return il2cpp::get_class<app::_Activator__Class>(type_info, "System.Runtime.InteropServices", "_Activator");
        }
        inline app::_Activator* create() {
            return il2cpp::create_object<app::_Activator>(get_class());
        }
    } // namespace _Activator
} // namespace app::classes::types
