#pragma once
#include <Modloader/app/structs/MapmakerUIDetails.h>
#include <Modloader/app/structs/MapmakerUIDetails__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapmakerUIDetails {
        inline app::MapmakerUIDetails__Class** type_info() {
            static app::MapmakerUIDetails__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapmakerUIDetails__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapmakerUIDetails__Class* get_class() {
            return il2cpp::get_class<app::MapmakerUIDetails__Class>(type_info(), "", "MapmakerUIDetails");
        }
        inline app::MapmakerUIDetails* create() {
            return il2cpp::create_object<app::MapmakerUIDetails>(get_class());
        }
    } // namespace MapmakerUIDetails
} // namespace app::classes::types
