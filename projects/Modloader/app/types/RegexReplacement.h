#pragma once
#include <Modloader/app/structs/RegexReplacement.h>
#include <Modloader/app/structs/RegexReplacement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexReplacement {
        inline app::RegexReplacement__Class** type_info() {
            static app::RegexReplacement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexReplacement__Class**)(modloader::win::memory::resolve_rva(0x04719790));
            }
            return cache;
        }
        inline app::RegexReplacement__Class* get_class() {
            return il2cpp::get_class<app::RegexReplacement__Class>(type_info(), "System.Text.RegularExpressions", "RegexReplacement");
        }
        inline app::RegexReplacement* create() {
            return il2cpp::create_object<app::RegexReplacement>(get_class());
        }
    } // namespace RegexReplacement
} // namespace app::classes::types
