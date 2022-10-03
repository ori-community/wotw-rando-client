#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDamageReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDamageReciever__Class** type_info;
        inline app::SeinDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageReciever__Class>(type_info, "", "SeinDamageReciever");
        }
        inline app::SeinDamageReciever* create() {
            return il2cpp::create_object<app::SeinDamageReciever>(get_class());
        }
    } // namespace SeinDamageReciever
} // namespace app::classes::types
