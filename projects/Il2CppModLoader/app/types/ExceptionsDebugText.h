#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionsDebugText {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionsDebugText__Class** type_info;
        inline app::ExceptionsDebugText__Class* get_class() {
            return il2cpp::get_class<app::ExceptionsDebugText__Class>(type_info, "", "ExceptionsDebugText");
        }
        inline app::ExceptionsDebugText* create() {
            return il2cpp::create_object<app::ExceptionsDebugText>(get_class());
        }
    } // namespace ExceptionsDebugText
} // namespace app::classes::types
