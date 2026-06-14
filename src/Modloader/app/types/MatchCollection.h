#pragma once
#include <Modloader/app/structs/MatchCollection.h>
#include <Modloader/app/structs/MatchCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchCollection {
        inline app::MatchCollection__Class** type_info() {
            static app::MatchCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MatchCollection__Class**)(modloader::win::memory::resolve_rva(0x0475B8D0));
            }
            return cache;
        }
        inline app::MatchCollection__Class* get_class() {
            return il2cpp::get_class<app::MatchCollection__Class>(type_info(), "System.Text.RegularExpressions", "MatchCollection");
        }
        inline app::MatchCollection* create() {
            return il2cpp::create_object<app::MatchCollection>(get_class());
        }
    } // namespace MatchCollection
} // namespace app::classes::types
