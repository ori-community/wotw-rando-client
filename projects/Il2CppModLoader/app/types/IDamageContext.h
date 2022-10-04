#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDamageContext__Class** type_info;
        inline app::IDamageContext__Class* get_class() {
            return il2cpp::get_class<app::IDamageContext__Class>(type_info, "", "IDamageContext");
        }
        inline app::IDamageContext* create() {
            return il2cpp::create_object<app::IDamageContext>(get_class());
        }
    } // namespace IDamageContext
} // namespace app::classes::types
