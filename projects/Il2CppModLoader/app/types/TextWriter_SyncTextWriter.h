#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextWriter_SyncTextWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextWriter_SyncTextWriter__Class** type_info;
        inline app::TextWriter_SyncTextWriter__Class* get_class() {
            return il2cpp::get_nested_class<app::TextWriter_SyncTextWriter__Class>(type_info, "System.IO", "TextWriter", "SyncTextWriter");
        }
        inline app::TextWriter_SyncTextWriter* create() {
            return il2cpp::create_object<app::TextWriter_SyncTextWriter>(get_class());
        }
    } // namespace TextWriter_SyncTextWriter
} // namespace app::classes::types
