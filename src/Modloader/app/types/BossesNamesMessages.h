#pragma once
#include <Modloader/app/structs/BossesNamesMessages.h>
#include <Modloader/app/structs/BossesNamesMessages__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossesNamesMessages {
        inline app::BossesNamesMessages__Class** type_info() {
            static app::BossesNamesMessages__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BossesNamesMessages__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BossesNamesMessages__Class* get_class() {
            return il2cpp::get_class<app::BossesNamesMessages__Class>(type_info(), "", "BossesNamesMessages");
        }
        inline app::BossesNamesMessages* create() {
            return il2cpp::create_object<app::BossesNamesMessages>(get_class());
        }
    } // namespace BossesNamesMessages
} // namespace app::classes::types
