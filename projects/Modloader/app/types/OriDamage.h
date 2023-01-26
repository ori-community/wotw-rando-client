#pragma once
#include <Modloader/app/structs/OriDamage.h>
#include <Modloader/app/structs/OriDamage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriDamage {
        inline app::OriDamage__Class** type_info() {
            static app::OriDamage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriDamage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriDamage__Class* get_class() {
            return il2cpp::get_class<app::OriDamage__Class>(type_info(), "", "OriDamage");
        }
        inline app::OriDamage* create() {
            return il2cpp::create_object<app::OriDamage>(get_class());
        }
    } // namespace OriDamage
} // namespace app::classes::types
