#pragma once
#include <Modloader/app/structs/SlugDamageReciever.h>
#include <Modloader/app/structs/SlugDamageReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugDamageReciever {
        inline app::SlugDamageReciever__Class** type_info() {
            static app::SlugDamageReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugDamageReciever__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::SlugDamageReciever__Class>(type_info(), "", "SlugDamageReciever");
        }
        inline app::SlugDamageReciever* create() {
            return il2cpp::create_object<app::SlugDamageReciever>(get_class());
        }
    } // namespace SlugDamageReciever
} // namespace app::classes::types
