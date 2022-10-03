#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_Data {
        extern IL2CPP_MODLOADER_DLLEXPORT app::YouCanLeaveYourHatOn_Data__Class** type_info;
        inline app::YouCanLeaveYourHatOn_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::YouCanLeaveYourHatOn_Data__Class>(type_info, "", "YouCanLeaveYourHatOn", "Data");
        }
        inline app::YouCanLeaveYourHatOn_Data* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_Data>(get_class());
        }
        inline app::YouCanLeaveYourHatOn_Data__Array* create_array(int size) {
            return il2cpp::array_new<app::YouCanLeaveYourHatOn_Data__Array>(get_class(), size);
        }
    } // namespace YouCanLeaveYourHatOn_Data
} // namespace app::classes::types
