#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugDamageReciever {
        namespace {
            app::SlugDamageReciever__Class* type_info_ref = nullptr;
        }
        app::SlugDamageReciever__Class** type_info = &type_info_ref;
        inline app::SlugDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::SlugDamageReciever__Class>(type_info, "", "SlugDamageReciever");
        }
        inline app::SlugDamageReciever* create() {
            return il2cpp::create_object<app::SlugDamageReciever>(get_class());
        }
    } // namespace SlugDamageReciever
} // namespace app::classes::types
