#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexFCD {
        inline app::RegexFCD__Class** type_info = (app::RegexFCD__Class**)(modloader::win::memory::resolve_rva(0x0470BC28));
        inline app::RegexFCD__Class* get_class() {
            return il2cpp::get_class<app::RegexFCD__Class>(type_info, "System.Text.RegularExpressions", "RegexFCD");
        }
        inline app::RegexFCD* create() {
            return il2cpp::create_object<app::RegexFCD>(get_class());
        }
    } // namespace RegexFCD
} // namespace app::classes::types
