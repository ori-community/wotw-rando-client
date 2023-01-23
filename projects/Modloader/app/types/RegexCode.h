#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegexCode__Class.h>
#include <Modloader/app/structs/RegexCode.h>

namespace app::classes::types {
    namespace RegexCode {
        inline app::RegexCode__Class** type_info = (app::RegexCode__Class**)(modloader::win::memory::resolve_rva(0x04719710));
        inline app::RegexCode__Class* get_class() {
            return il2cpp::get_class<app::RegexCode__Class>(type_info, "System.Text.RegularExpressions", "RegexCode");
        }
        inline app::RegexCode* create() {
            return il2cpp::create_object<app::RegexCode>(get_class());
        }
    } // namespace RegexCode
} // namespace app::classes::types
