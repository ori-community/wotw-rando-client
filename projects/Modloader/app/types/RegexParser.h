#pragma once
#include <Modloader/app/structs/RegexParser.h>
#include <Modloader/app/structs/RegexParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexParser {
        inline app::RegexParser__Class** type_info() {
            static app::RegexParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexParser__Class**)(modloader::win::memory::resolve_rva(0x0476B290));
            }
            return cache;
        }
        inline app::RegexParser__Class* get_class() {
            return il2cpp::get_class<app::RegexParser__Class>(type_info(), "System.Text.RegularExpressions", "RegexParser");
        }
        inline app::RegexParser* create() {
            return il2cpp::create_object<app::RegexParser>(get_class());
        }
    } // namespace RegexParser
} // namespace app::classes::types
