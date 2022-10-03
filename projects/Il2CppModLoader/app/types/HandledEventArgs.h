#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HandledEventArgs {
        namespace {
            app::HandledEventArgs__Class* type_info_ref = nullptr;
        }
        app::HandledEventArgs__Class** type_info = &type_info_ref;
        inline app::HandledEventArgs__Class* get_class() {
            return il2cpp::get_class<app::HandledEventArgs__Class>(type_info, "System.ComponentModel", "HandledEventArgs");
        }
        inline app::HandledEventArgs* create() {
            return il2cpp::create_object<app::HandledEventArgs>(get_class());
        }
    } // namespace HandledEventArgs
} // namespace app::classes::types
