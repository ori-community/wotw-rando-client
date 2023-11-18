#pragma once
#include <Modloader/app/structs/SetRotationFromDamage.h>
#include <Modloader/app/structs/SetRotationFromDamage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetRotationFromDamage {
        inline app::SetRotationFromDamage__Class** type_info() {
            static app::SetRotationFromDamage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetRotationFromDamage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetRotationFromDamage__Class* get_class() {
            return il2cpp::get_class<app::SetRotationFromDamage__Class>(type_info(), "", "SetRotationFromDamage");
        }
        inline app::SetRotationFromDamage* create() {
            return il2cpp::create_object<app::SetRotationFromDamage>(get_class());
        }
    } // namespace SetRotationFromDamage
} // namespace app::classes::types
