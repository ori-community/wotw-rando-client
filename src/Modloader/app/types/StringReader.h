#pragma once
#include <Modloader/app/structs/StringReader.h>
#include <Modloader/app/structs/StringReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringReader {
        inline app::StringReader__Class** type_info() {
            static app::StringReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringReader__Class**)(modloader::win::memory::resolve_rva(0x04720B88));
            }
            return cache;
        }
        inline app::StringReader__Class* get_class() {
            return il2cpp::get_class<app::StringReader__Class>(type_info(), "System.IO", "StringReader");
        }
        inline app::StringReader* create() {
            return il2cpp::create_object<app::StringReader>(get_class());
        }
    } // namespace StringReader
} // namespace app::classes::types
