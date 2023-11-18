#pragma once
#include <Modloader/app/structs/RegexInterpreter.h>
#include <Modloader/app/structs/RegexInterpreter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexInterpreter {
        inline app::RegexInterpreter__Class** type_info() {
            static app::RegexInterpreter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexInterpreter__Class**)(modloader::win::memory::resolve_rva(0x04728118));
            }
            return cache;
        }
        inline app::RegexInterpreter__Class* get_class() {
            return il2cpp::get_class<app::RegexInterpreter__Class>(type_info(), "System.Text.RegularExpressions", "RegexInterpreter");
        }
        inline app::RegexInterpreter* create() {
            return il2cpp::create_object<app::RegexInterpreter>(get_class());
        }
    } // namespace RegexInterpreter
} // namespace app::classes::types
