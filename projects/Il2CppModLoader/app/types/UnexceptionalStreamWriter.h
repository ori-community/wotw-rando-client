#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnexceptionalStreamWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnexceptionalStreamWriter__Class** type_info;
        inline app::UnexceptionalStreamWriter__Class* get_class() {
            return il2cpp::get_class<app::UnexceptionalStreamWriter__Class>(type_info, "System.IO", "UnexceptionalStreamWriter");
        }
        inline app::UnexceptionalStreamWriter* create() {
            return il2cpp::create_object<app::UnexceptionalStreamWriter>(get_class());
        }
    } // namespace UnexceptionalStreamWriter
} // namespace app::classes::types
