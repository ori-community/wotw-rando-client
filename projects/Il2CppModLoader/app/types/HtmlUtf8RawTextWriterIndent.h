#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HtmlUtf8RawTextWriterIndent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HtmlUtf8RawTextWriterIndent__Class** type_info;
        inline app::HtmlUtf8RawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::HtmlUtf8RawTextWriterIndent__Class>(type_info, "System.Xml", "HtmlUtf8RawTextWriterIndent");
        }
        inline app::HtmlUtf8RawTextWriterIndent* create() {
            return il2cpp::create_object<app::HtmlUtf8RawTextWriterIndent>(get_class());
        }
    } // namespace HtmlUtf8RawTextWriterIndent
} // namespace app::classes::types
