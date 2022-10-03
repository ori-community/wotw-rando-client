#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::YouCanLeaveYourHatOn_c__Class** type_info;
        inline app::YouCanLeaveYourHatOn_c__Class* get_class() {
            return il2cpp::get_nested_class<app::YouCanLeaveYourHatOn_c__Class>(type_info, "", "YouCanLeaveYourHatOn", "<>c");
        }
        inline app::YouCanLeaveYourHatOn_c* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_c>(get_class());
        }
    } // namespace YouCanLeaveYourHatOn_c
} // namespace app::classes::types
