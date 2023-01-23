#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextEncodedRawTextWriter__Class.h>
#include <Modloader/app/structs/TextEncodedRawTextWriter.h>

namespace app::classes::types {
    namespace TextEncodedRawTextWriter {
        inline app::TextEncodedRawTextWriter__Class** type_info = (app::TextEncodedRawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04719260));
        inline app::TextEncodedRawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::TextEncodedRawTextWriter__Class>(type_info, "System.Xml", "TextEncodedRawTextWriter");
        }
        inline app::TextEncodedRawTextWriter* create() {
            return il2cpp::create_object<app::TextEncodedRawTextWriter>(get_class());
        }
    } // namespace TextEncodedRawTextWriter
} // namespace app::classes::types
