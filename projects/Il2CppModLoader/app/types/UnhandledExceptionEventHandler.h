#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnhandledExceptionEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnhandledExceptionEventHandler__Class** type_info;
        inline app::UnhandledExceptionEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionEventHandler__Class>(type_info, "System", "UnhandledExceptionEventHandler");
        }
        inline app::UnhandledExceptionEventHandler* create() {
            return il2cpp::create_object<app::UnhandledExceptionEventHandler>(get_class());
        }
    } // namespace UnhandledExceptionEventHandler
} // namespace app::classes::types
