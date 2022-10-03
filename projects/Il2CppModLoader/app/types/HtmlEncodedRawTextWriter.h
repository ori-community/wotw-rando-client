#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HtmlEncodedRawTextWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HtmlEncodedRawTextWriter__Class** type_info;
        inline app::HtmlEncodedRawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::HtmlEncodedRawTextWriter__Class>(type_info, "System.Xml", "HtmlEncodedRawTextWriter");
        }
        inline app::HtmlEncodedRawTextWriter* create() {
            return il2cpp::create_object<app::HtmlEncodedRawTextWriter>(get_class());
        }
    } // namespace HtmlEncodedRawTextWriter
} // namespace app::classes::types
