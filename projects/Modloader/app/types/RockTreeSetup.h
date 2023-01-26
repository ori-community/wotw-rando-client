#pragma once
#include <Modloader/app/structs/RockTreeSetup.h>
#include <Modloader/app/structs/RockTreeSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RockTreeSetup {
        inline app::RockTreeSetup__Class** type_info() {
            static app::RockTreeSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RockTreeSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RockTreeSetup__Class* get_class() {
            return il2cpp::get_class<app::RockTreeSetup__Class>(type_info(), "", "RockTreeSetup");
        }
        inline app::RockTreeSetup* create() {
            return il2cpp::create_object<app::RockTreeSetup>(get_class());
        }
    } // namespace RockTreeSetup
} // namespace app::classes::types
