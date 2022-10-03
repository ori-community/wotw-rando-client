#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CStreamWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CStreamWriter__Class** type_info;
        inline app::CStreamWriter__Class* get_class() {
            return il2cpp::get_class<app::CStreamWriter__Class>(type_info, "System.IO", "CStreamWriter");
        }
        inline app::CStreamWriter* create() {
            return il2cpp::create_object<app::CStreamWriter>(get_class());
        }
    } // namespace CStreamWriter
} // namespace app::classes::types
