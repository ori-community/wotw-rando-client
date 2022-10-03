#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugWriter__Class** type_info;
        inline app::DebugWriter__Class* get_class() {
            return il2cpp::get_class<app::DebugWriter__Class>(type_info, "TriangleNet.IO", "DebugWriter");
        }
        inline app::DebugWriter* create() {
            return il2cpp::create_object<app::DebugWriter>(get_class());
        }
    } // namespace DebugWriter
} // namespace app::classes::types
