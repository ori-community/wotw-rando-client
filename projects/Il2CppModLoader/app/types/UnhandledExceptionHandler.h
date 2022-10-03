#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnhandledExceptionHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnhandledExceptionHandler__Class** type_info;
        inline app::UnhandledExceptionHandler__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionHandler__Class>(type_info, "UnityEngine", "UnhandledExceptionHandler");
        }
        inline app::UnhandledExceptionHandler* create() {
            return il2cpp::create_object<app::UnhandledExceptionHandler>(get_class());
        }
    } // namespace UnhandledExceptionHandler
} // namespace app::classes::types
