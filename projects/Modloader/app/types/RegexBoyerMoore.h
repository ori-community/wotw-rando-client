#pragma once
#include <Modloader/app/structs/RegexBoyerMoore.h>
#include <Modloader/app/structs/RegexBoyerMoore__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexBoyerMoore {
        inline app::RegexBoyerMoore__Class** type_info() {
            static app::RegexBoyerMoore__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexBoyerMoore__Class**)(modloader::win::memory::resolve_rva(0x0476F3D8));
            }
            return cache;
        }
        inline app::RegexBoyerMoore__Class* get_class() {
            return il2cpp::get_class<app::RegexBoyerMoore__Class>(type_info(), "System.Text.RegularExpressions", "RegexBoyerMoore");
        }
        inline app::RegexBoyerMoore* create() {
            return il2cpp::create_object<app::RegexBoyerMoore>(get_class());
        }
    } // namespace RegexBoyerMoore
} // namespace app::classes::types
