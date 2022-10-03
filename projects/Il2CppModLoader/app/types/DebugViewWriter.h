#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugViewWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugViewWriter__Class** type_info;
        inline app::DebugViewWriter__Class* get_class() {
            return il2cpp::get_class<app::DebugViewWriter__Class>(type_info, "System.Linq.Expressions", "DebugViewWriter");
        }
        inline app::DebugViewWriter* create() {
            return il2cpp::create_object<app::DebugViewWriter>(get_class());
        }
    } // namespace DebugViewWriter
} // namespace app::classes::types
