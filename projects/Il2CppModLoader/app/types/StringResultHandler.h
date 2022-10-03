#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringResultHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringResultHandler__Class** type_info;
        inline app::StringResultHandler__Class* get_class() {
            return il2cpp::get_class<app::StringResultHandler__Class>(type_info, "System.IO", "StringResultHandler");
        }
        inline app::StringResultHandler* create() {
            return il2cpp::create_object<app::StringResultHandler>(get_class());
        }
    } // namespace StringResultHandler
} // namespace app::classes::types
