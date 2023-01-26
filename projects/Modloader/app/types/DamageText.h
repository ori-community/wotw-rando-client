#pragma once
#include <Modloader/app/structs/DamageText.h>
#include <Modloader/app/structs/DamageText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageText {
        inline app::DamageText__Class** type_info() {
            static app::DamageText__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageText__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageText__Class* get_class() {
            return il2cpp::get_class<app::DamageText__Class>(type_info(), "", "DamageText");
        }
        inline app::DamageText* create() {
            return il2cpp::create_object<app::DamageText>(get_class());
        }
    } // namespace DamageText
} // namespace app::classes::types
