#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexWriter {
        inline app::RegexWriter__Class** type_info = (app::RegexWriter__Class**)(modloader::win::memory::resolve_rva(0x04706598));
        inline app::RegexWriter__Class* get_class() {
            return il2cpp::get_class<app::RegexWriter__Class>(type_info, "System.Text.RegularExpressions", "RegexWriter");
        }
        inline app::RegexWriter* create() {
            return il2cpp::create_object<app::RegexWriter>(get_class());
        }
    } // namespace RegexWriter
} // namespace app::classes::types
