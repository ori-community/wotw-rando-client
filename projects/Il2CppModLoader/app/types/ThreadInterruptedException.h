#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadInterruptedException {
        namespace {
            app::ThreadInterruptedException__Class* type_info_ref = nullptr;
        }
        app::ThreadInterruptedException__Class** type_info = &type_info_ref;
        inline app::ThreadInterruptedException__Class* get_class() {
            return il2cpp::get_class<app::ThreadInterruptedException__Class>(type_info, "System.Threading", "ThreadInterruptedException");
        }
        inline app::ThreadInterruptedException* create() {
            return il2cpp::create_object<app::ThreadInterruptedException>(get_class());
        }
    } // namespace ThreadInterruptedException
} // namespace app::classes::types
