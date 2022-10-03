#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HandledEventHandler {
        namespace {
            app::HandledEventHandler__Class* type_info_ref = nullptr;
        }
        app::HandledEventHandler__Class** type_info = &type_info_ref;
        inline app::HandledEventHandler__Class* get_class() {
            return il2cpp::get_class<app::HandledEventHandler__Class>(type_info, "System.ComponentModel", "HandledEventHandler");
        }
        inline app::HandledEventHandler* create() {
            return il2cpp::create_object<app::HandledEventHandler>(get_class());
        }
    } // namespace HandledEventHandler
} // namespace app::classes::types
