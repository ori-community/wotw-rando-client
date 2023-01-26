#pragma once
#include <Modloader/app/structs/CreditsTextPosition.h>
#include <Modloader/app/structs/CreditsTextPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreditsTextPosition {
        inline app::CreditsTextPosition__Class** type_info() {
            static app::CreditsTextPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CreditsTextPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CreditsTextPosition__Class* get_class() {
            return il2cpp::get_class<app::CreditsTextPosition__Class>(type_info(), "", "CreditsTextPosition");
        }
        inline app::CreditsTextPosition* create() {
            return il2cpp::create_object<app::CreditsTextPosition>(get_class());
        }
    } // namespace CreditsTextPosition
} // namespace app::classes::types
