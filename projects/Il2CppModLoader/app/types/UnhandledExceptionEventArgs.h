#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnhandledExceptionEventArgs {
        namespace {
            app::UnhandledExceptionEventArgs__Class* type_info_ref = nullptr;
        }
        app::UnhandledExceptionEventArgs__Class** type_info = &type_info_ref;
        inline app::UnhandledExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionEventArgs__Class>(type_info, "System", "UnhandledExceptionEventArgs");
        }
        inline app::UnhandledExceptionEventArgs* create() {
            return il2cpp::create_object<app::UnhandledExceptionEventArgs>(get_class());
        }
    } // namespace UnhandledExceptionEventArgs
} // namespace app::classes::types
