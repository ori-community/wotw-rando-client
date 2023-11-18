#pragma once
#include <Modloader/app/structs/HtmlUtf8RawTextWriterIndent.h>
#include <Modloader/app/structs/HtmlUtf8RawTextWriterIndent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HtmlUtf8RawTextWriterIndent {
        inline app::HtmlUtf8RawTextWriterIndent__Class** type_info() {
            static app::HtmlUtf8RawTextWriterIndent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HtmlUtf8RawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x0475C340));
            }
            return cache;
        }
        inline app::HtmlUtf8RawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::HtmlUtf8RawTextWriterIndent__Class>(type_info(), "System.Xml", "HtmlUtf8RawTextWriterIndent");
        }
        inline app::HtmlUtf8RawTextWriterIndent* create() {
            return il2cpp::create_object<app::HtmlUtf8RawTextWriterIndent>(get_class());
        }
    } // namespace HtmlUtf8RawTextWriterIndent
} // namespace app::classes::types
