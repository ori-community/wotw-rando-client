#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _Thread {
        namespace {
            app::_Thread__Class* type_info_ref = nullptr;
        }
        app::_Thread__Class** type_info = &type_info_ref;
        inline app::_Thread__Class* get_class() {
            return il2cpp::get_class<app::_Thread__Class>(type_info, "System.Runtime.InteropServices", "_Thread");
        }
        inline app::_Thread* create() {
            return il2cpp::create_object<app::_Thread>(get_class());
        }
    } // namespace _Thread
} // namespace app::classes::types
