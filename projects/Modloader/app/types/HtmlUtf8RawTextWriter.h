#pragma once
#include <Modloader/app/structs/HtmlUtf8RawTextWriter.h>
#include <Modloader/app/structs/HtmlUtf8RawTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HtmlUtf8RawTextWriter {
        inline app::HtmlUtf8RawTextWriter__Class** type_info() {
            static app::HtmlUtf8RawTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HtmlUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04728E30));
            }
            return cache;
        }
        inline app::HtmlUtf8RawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::HtmlUtf8RawTextWriter__Class>(type_info(), "System.Xml", "HtmlUtf8RawTextWriter");
        }
        inline app::HtmlUtf8RawTextWriter* create() {
            return il2cpp::create_object<app::HtmlUtf8RawTextWriter>(get_class());
        }
    } // namespace HtmlUtf8RawTextWriter
} // namespace app::classes::types
