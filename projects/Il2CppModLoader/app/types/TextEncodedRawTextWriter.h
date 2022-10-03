#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextEncodedRawTextWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextEncodedRawTextWriter__Class** type_info;
        inline app::TextEncodedRawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::TextEncodedRawTextWriter__Class>(type_info, "System.Xml", "TextEncodedRawTextWriter");
        }
        inline app::TextEncodedRawTextWriter* create() {
            return il2cpp::create_object<app::TextEncodedRawTextWriter>(get_class());
        }
    } // namespace TextEncodedRawTextWriter
} // namespace app::classes::types
