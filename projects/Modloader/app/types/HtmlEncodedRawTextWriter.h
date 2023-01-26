#pragma once
#include <Modloader/app/structs/HtmlEncodedRawTextWriter.h>
#include <Modloader/app/structs/HtmlEncodedRawTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HtmlEncodedRawTextWriter {
        inline app::HtmlEncodedRawTextWriter__Class** type_info() {
            static app::HtmlEncodedRawTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HtmlEncodedRawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04719250));
            }
            return cache;
        }
        inline app::HtmlEncodedRawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::HtmlEncodedRawTextWriter__Class>(type_info(), "System.Xml", "HtmlEncodedRawTextWriter");
        }
        inline app::HtmlEncodedRawTextWriter* create() {
            return il2cpp::create_object<app::HtmlEncodedRawTextWriter>(get_class());
        }
    } // namespace HtmlEncodedRawTextWriter
} // namespace app::classes::types
