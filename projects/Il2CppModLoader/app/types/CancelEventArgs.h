#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelEventArgs {
        namespace {
            app::CancelEventArgs__Class* type_info_ref = nullptr;
        }
        app::CancelEventArgs__Class** type_info = &type_info_ref;
        inline app::CancelEventArgs__Class* get_class() {
            return il2cpp::get_class<app::CancelEventArgs__Class>(type_info, "System.ComponentModel", "CancelEventArgs");
        }
        inline app::CancelEventArgs* create() {
            return il2cpp::create_object<app::CancelEventArgs>(get_class());
        }
    } // namespace CancelEventArgs
} // namespace app::classes::types
