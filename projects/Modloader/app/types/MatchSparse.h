#pragma once
#include <Modloader/app/structs/MatchSparse.h>
#include <Modloader/app/structs/MatchSparse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchSparse {
        inline app::MatchSparse__Class** type_info() {
            static app::MatchSparse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MatchSparse__Class**)(modloader::win::memory::resolve_rva(0x0478F098));
            }
            return cache;
        }
        inline app::MatchSparse__Class* get_class() {
            return il2cpp::get_class<app::MatchSparse__Class>(type_info(), "System.Text.RegularExpressions", "MatchSparse");
        }
        inline app::MatchSparse* create() {
            return il2cpp::create_object<app::MatchSparse>(get_class());
        }
    } // namespace MatchSparse
} // namespace app::classes::types
