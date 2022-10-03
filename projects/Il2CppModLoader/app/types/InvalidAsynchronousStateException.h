#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidAsynchronousStateException {
        namespace {
            app::InvalidAsynchronousStateException__Class* type_info_ref = nullptr;
        }
        app::InvalidAsynchronousStateException__Class** type_info = &type_info_ref;
        inline app::InvalidAsynchronousStateException__Class* get_class() {
            return il2cpp::get_class<app::InvalidAsynchronousStateException__Class>(type_info, "System.ComponentModel", "InvalidAsynchronousStateException");
        }
        inline app::InvalidAsynchronousStateException* create() {
            return il2cpp::create_object<app::InvalidAsynchronousStateException>(get_class());
        }
    } // namespace InvalidAsynchronousStateException
} // namespace app::classes::types
