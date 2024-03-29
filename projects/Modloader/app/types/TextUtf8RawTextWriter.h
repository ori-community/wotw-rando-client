#pragma once
#include <Modloader/app/structs/TextUtf8RawTextWriter.h>
#include <Modloader/app/structs/TextUtf8RawTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextUtf8RawTextWriter {
        inline app::TextUtf8RawTextWriter__Class** type_info() {
            static app::TextUtf8RawTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04704428));
            }
            return cache;
        }
        inline app::TextUtf8RawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::TextUtf8RawTextWriter__Class>(type_info(), "System.Xml", "TextUtf8RawTextWriter");
        }
        inline app::TextUtf8RawTextWriter* create() {
            return il2cpp::create_object<app::TextUtf8RawTextWriter>(get_class());
        }
    } // namespace TextUtf8RawTextWriter
} // namespace app::classes::types
