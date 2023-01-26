#pragma once
#include <Modloader/app/structs/SetCharacterPosition.h>
#include <Modloader/app/structs/SetCharacterPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetCharacterPosition {
        inline app::SetCharacterPosition__Class** type_info() {
            static app::SetCharacterPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetCharacterPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetCharacterPosition__Class* get_class() {
            return il2cpp::get_class<app::SetCharacterPosition__Class>(type_info(), "", "SetCharacterPosition");
        }
        inline app::SetCharacterPosition* create() {
            return il2cpp::create_object<app::SetCharacterPosition>(get_class());
        }
    } // namespace SetCharacterPosition
} // namespace app::classes::types
