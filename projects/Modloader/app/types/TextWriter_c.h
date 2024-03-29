#pragma once
#include <Modloader/app/structs/TextWriter_c.h>
#include <Modloader/app/structs/TextWriter_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextWriter_c {
        inline app::TextWriter_c__Class** type_info() {
            static app::TextWriter_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextWriter_c__Class**)(modloader::win::memory::resolve_rva(0x04746BB0));
            }
            return cache;
        }
        inline app::TextWriter_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TextWriter_c__Class>(type_info(), "System.IO", "TextWriter", "<>c");
        }
        inline app::TextWriter_c* create() {
            return il2cpp::create_object<app::TextWriter_c>(get_class());
        }
    } // namespace TextWriter_c
} // namespace app::classes::types
