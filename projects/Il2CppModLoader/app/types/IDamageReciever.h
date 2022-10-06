#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDamageReciever__Class** type_info;
        inline app::IDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::IDamageReciever__Class>(type_info, "", "IDamageReciever");
        }
        inline app::IDamageReciever__Array* create_array(int size) {
            return il2cpp::array_new<app::IDamageReciever__Array>(get_class(), size);
        }
        inline app::IDamageReciever__Array* create_array(const std::vector<app::IDamageReciever*>& items) {
            return il2cpp::array_new<app::IDamageReciever__Array>(get_class(), items);
        }
    } // namespace IDamageReciever
} // namespace app::classes::types
