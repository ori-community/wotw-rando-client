#pragma once
#include <Modloader/app/structs/CharacterAirNoDeceleration.h>
#include <Modloader/app/structs/CharacterAirNoDeceleration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterAirNoDeceleration {
        inline app::CharacterAirNoDeceleration__Class** type_info() {
            static app::CharacterAirNoDeceleration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterAirNoDeceleration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterAirNoDeceleration__Class* get_class() {
            return il2cpp::get_class<app::CharacterAirNoDeceleration__Class>(type_info(), "", "CharacterAirNoDeceleration");
        }
        inline app::CharacterAirNoDeceleration* create() {
            return il2cpp::create_object<app::CharacterAirNoDeceleration>(get_class());
        }
    } // namespace CharacterAirNoDeceleration
} // namespace app::classes::types
