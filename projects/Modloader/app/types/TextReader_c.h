#pragma once
#include <Modloader/app/structs/TextReader_c.h>
#include <Modloader/app/structs/TextReader_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextReader_c {
        inline app::TextReader_c__Class** type_info() {
            static app::TextReader_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextReader_c__Class**)(modloader::win::memory::resolve_rva(0x047989C0));
            }
            return cache;
        }
        inline app::TextReader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextReader_c__Class>(type_info(), "System.IO", "TextReader", "<>c");
        }
        inline app::TextReader_c* create() {
            return il2cpp::create_object<app::TextReader_c>(get_class());
        }
    } // namespace TextReader_c
} // namespace app::classes::types
