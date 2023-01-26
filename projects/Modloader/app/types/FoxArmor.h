#pragma once
#include <Modloader/app/structs/FoxArmor.h>
#include <Modloader/app/structs/FoxArmor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxArmor {
        inline app::FoxArmor__Class** type_info() {
            static app::FoxArmor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxArmor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxArmor__Class* get_class() {
            return il2cpp::get_class<app::FoxArmor__Class>(type_info(), "", "FoxArmor");
        }
        inline app::FoxArmor* create() {
            return il2cpp::create_object<app::FoxArmor>(get_class());
        }
    } // namespace FoxArmor
} // namespace app::classes::types
