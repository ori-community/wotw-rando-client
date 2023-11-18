#pragma once
#include <Modloader/app/structs/TextReader.h>
#include <Modloader/app/structs/TextReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextReader {
        inline app::TextReader__Class** type_info() {
            static app::TextReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextReader__Class**)(modloader::win::memory::resolve_rva(0x04765720));
            }
            return cache;
        }
        inline app::TextReader__Class* get_class() {
            return il2cpp::get_class<app::TextReader__Class>(type_info(), "System.IO", "TextReader");
        }
        inline app::TextReader* create() {
            return il2cpp::create_object<app::TextReader>(get_class());
        }
    } // namespace TextReader
} // namespace app::classes::types
