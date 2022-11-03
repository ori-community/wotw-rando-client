#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexPrefix {
        inline app::RegexPrefix__Class** type_info = (app::RegexPrefix__Class**)(modloader::win::memory::resolve_rva(0x04788A18));
        inline app::RegexPrefix__Class* get_class() {
            return il2cpp::get_class<app::RegexPrefix__Class>(type_info, "System.Text.RegularExpressions", "RegexPrefix");
        }
        inline app::RegexPrefix* create() {
            return il2cpp::create_object<app::RegexPrefix>(get_class());
        }
    } // namespace RegexPrefix
} // namespace app::classes::types
