#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegexInterpreter__Class.h>
#include <Modloader/app/structs/RegexInterpreter.h>

namespace app::classes::types {
    namespace RegexInterpreter {
        inline app::RegexInterpreter__Class** type_info = (app::RegexInterpreter__Class**)(modloader::win::memory::resolve_rva(0x04728118));
        inline app::RegexInterpreter__Class* get_class() {
            return il2cpp::get_class<app::RegexInterpreter__Class>(type_info, "System.Text.RegularExpressions", "RegexInterpreter");
        }
        inline app::RegexInterpreter* create() {
            return il2cpp::create_object<app::RegexInterpreter>(get_class());
        }
    } // namespace RegexInterpreter
} // namespace app::classes::types
