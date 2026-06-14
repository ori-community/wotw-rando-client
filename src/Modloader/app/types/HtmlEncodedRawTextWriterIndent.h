#pragma once
#include <Modloader/app/structs/HtmlEncodedRawTextWriterIndent.h>
#include <Modloader/app/structs/HtmlEncodedRawTextWriterIndent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HtmlEncodedRawTextWriterIndent {
        inline app::HtmlEncodedRawTextWriterIndent__Class** type_info() {
            static app::HtmlEncodedRawTextWriterIndent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HtmlEncodedRawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x0471E608));
            }
            return cache;
        }
        inline app::HtmlEncodedRawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::HtmlEncodedRawTextWriterIndent__Class>(type_info(), "System.Xml", "HtmlEncodedRawTextWriterIndent");
        }
        inline app::HtmlEncodedRawTextWriterIndent* create() {
            return il2cpp::create_object<app::HtmlEncodedRawTextWriterIndent>(get_class());
        }
    } // namespace HtmlEncodedRawTextWriterIndent
} // namespace app::classes::types
