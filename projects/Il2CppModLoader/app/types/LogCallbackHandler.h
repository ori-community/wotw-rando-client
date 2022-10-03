#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogCallbackHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LogCallbackHandler__Class** type_info;
        inline app::LogCallbackHandler__Class* get_class() {
            return il2cpp::get_class<app::LogCallbackHandler__Class>(type_info, "", "LogCallbackHandler");
        }
        inline app::LogCallbackHandler* create() {
            return il2cpp::create_object<app::LogCallbackHandler>(get_class());
        }
    } // namespace LogCallbackHandler
} // namespace app::classes::types
