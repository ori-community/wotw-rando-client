#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextUtf8RawTextWriter {
        inline app::TextUtf8RawTextWriter__Class** type_info = (app::TextUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04704428));
        inline app::TextUtf8RawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::TextUtf8RawTextWriter__Class>(type_info, "System.Xml", "TextUtf8RawTextWriter");
        }
        inline app::TextUtf8RawTextWriter* create() {
            return il2cpp::create_object<app::TextUtf8RawTextWriter>(get_class());
        }
    } // namespace TextUtf8RawTextWriter
} // namespace app::classes::types
