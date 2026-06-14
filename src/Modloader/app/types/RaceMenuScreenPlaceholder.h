#pragma once
#include <Modloader/app/structs/RaceMenuScreenPlaceholder.h>
#include <Modloader/app/structs/RaceMenuScreenPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenPlaceholder {
        inline app::RaceMenuScreenPlaceholder__Class** type_info() {
            static app::RaceMenuScreenPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceMenuScreenPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceMenuScreenPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenPlaceholder__Class>(type_info(), "", "RaceMenuScreenPlaceholder");
        }
        inline app::RaceMenuScreenPlaceholder* create() {
            return il2cpp::create_object<app::RaceMenuScreenPlaceholder>(get_class());
        }
    } // namespace RaceMenuScreenPlaceholder
} // namespace app::classes::types
