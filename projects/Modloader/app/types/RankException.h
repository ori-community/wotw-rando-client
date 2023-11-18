#pragma once
#include <Modloader/app/structs/RankException.h>
#include <Modloader/app/structs/RankException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RankException {
        inline app::RankException__Class** type_info() {
            static app::RankException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RankException__Class**)(modloader::win::memory::resolve_rva(0x0475C458));
            }
            return cache;
        }
        inline app::RankException__Class* get_class() {
            return il2cpp::get_class<app::RankException__Class>(type_info(), "System", "RankException");
        }
        inline app::RankException* create() {
            return il2cpp::create_object<app::RankException>(get_class());
        }
    } // namespace RankException
} // namespace app::classes::types
