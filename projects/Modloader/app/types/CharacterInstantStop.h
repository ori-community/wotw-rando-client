#pragma once
#include <Modloader/app/structs/CharacterInstantStop.h>
#include <Modloader/app/structs/CharacterInstantStop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterInstantStop {
        inline app::CharacterInstantStop__Class** type_info() {
            static app::CharacterInstantStop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterInstantStop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterInstantStop__Class* get_class() {
            return il2cpp::get_class<app::CharacterInstantStop__Class>(type_info(), "", "CharacterInstantStop");
        }
        inline app::CharacterInstantStop* create() {
            return il2cpp::create_object<app::CharacterInstantStop>(get_class());
        }
    } // namespace CharacterInstantStop
} // namespace app::classes::types
