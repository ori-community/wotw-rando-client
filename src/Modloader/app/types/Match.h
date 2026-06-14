#pragma once
#include <Modloader/app/structs/Match.h>
#include <Modloader/app/structs/Match__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Match {
        inline app::Match__Class** type_info() {
            static app::Match__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Match__Class**)(modloader::win::memory::resolve_rva(0x04751F98));
            }
            return cache;
        }
        inline app::Match__Class* get_class() {
            return il2cpp::get_class<app::Match__Class>(type_info(), "System.Text.RegularExpressions", "Match");
        }
        inline app::Match* create() {
            return il2cpp::create_object<app::Match>(get_class());
        }
    } // namespace Match
} // namespace app::classes::types
