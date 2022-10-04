#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDamageReciever__Class** type_info;
        inline app::IDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::IDamageReciever__Class>(type_info, "", "IDamageReciever");
        }
        inline app::IDamageReciever* create() {
            return il2cpp::create_object<app::IDamageReciever>(get_class());
        }
        inline app::IDamageReciever__Array* create_array(int size) {
            return il2cpp::array_new<app::IDamageReciever__Array>(get_class(), size);
        }
    } // namespace IDamageReciever
} // namespace app::classes::types
