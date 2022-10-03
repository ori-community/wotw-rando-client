#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDamageReciever_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDamageReciever_c__Class** type_info;
        inline app::SeinDamageReciever_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDamageReciever_c__Class>(type_info, "", "SeinDamageReciever", "<>c");
        }
        inline app::SeinDamageReciever_c* create() {
            return il2cpp::create_object<app::SeinDamageReciever_c>(get_class());
        }
    } // namespace SeinDamageReciever_c
} // namespace app::classes::types
