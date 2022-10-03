#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnexceptionalStreamReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnexceptionalStreamReader__Class** type_info;
        inline app::UnexceptionalStreamReader__Class* get_class() {
            return il2cpp::get_class<app::UnexceptionalStreamReader__Class>(type_info, "System.IO", "UnexceptionalStreamReader");
        }
        inline app::UnexceptionalStreamReader* create() {
            return il2cpp::create_object<app::UnexceptionalStreamReader>(get_class());
        }
    } // namespace UnexceptionalStreamReader
} // namespace app::classes::types
