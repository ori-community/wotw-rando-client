#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HtmlEncodedRawTextWriterIndent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HtmlEncodedRawTextWriterIndent__Class** type_info;
        inline app::HtmlEncodedRawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::HtmlEncodedRawTextWriterIndent__Class>(type_info, "System.Xml", "HtmlEncodedRawTextWriterIndent");
        }
        inline app::HtmlEncodedRawTextWriterIndent* create() {
            return il2cpp::create_object<app::HtmlEncodedRawTextWriterIndent>(get_class());
        }
    } // namespace HtmlEncodedRawTextWriterIndent
} // namespace app::classes::types
