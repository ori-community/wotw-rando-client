#pragma once
#include <Modloader/app/structs/RegexWriter.h>
#include <Modloader/app/structs/RegexWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexWriter {
        inline app::RegexWriter__Class** type_info() {
            static app::RegexWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexWriter__Class**)(modloader::win::memory::resolve_rva(0x04706598));
            }
            return cache;
        }
        inline app::RegexWriter__Class* get_class() {
            return il2cpp::get_class<app::RegexWriter__Class>(type_info(), "System.Text.RegularExpressions", "RegexWriter");
        }
        inline app::RegexWriter* create() {
            return il2cpp::create_object<app::RegexWriter>(get_class());
        }
    } // namespace RegexWriter
} // namespace app::classes::types
