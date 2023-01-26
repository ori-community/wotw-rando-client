#pragma once
#include <Modloader/app/structs/RegexFCD.h>
#include <Modloader/app/structs/RegexFCD__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexFCD {
        inline app::RegexFCD__Class** type_info() {
            static app::RegexFCD__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexFCD__Class**)(modloader::win::memory::resolve_rva(0x0470BC28));
            }
            return cache;
        }
        inline app::RegexFCD__Class* get_class() {
            return il2cpp::get_class<app::RegexFCD__Class>(type_info(), "System.Text.RegularExpressions", "RegexFCD");
        }
        inline app::RegexFCD* create() {
            return il2cpp::create_object<app::RegexFCD>(get_class());
        }
    } // namespace RegexFCD
} // namespace app::classes::types
