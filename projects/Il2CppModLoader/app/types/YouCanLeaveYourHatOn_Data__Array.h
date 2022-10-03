#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_Data__Array {
        namespace {
            app::YouCanLeaveYourHatOn_Data__Array__Class* type_info_ref = nullptr;
        }
        app::YouCanLeaveYourHatOn_Data__Array__Class** type_info = &type_info_ref;
        inline app::YouCanLeaveYourHatOn_Data__Array__Class* get_class() {
            return il2cpp::get_class<app::YouCanLeaveYourHatOn_Data__Array__Class>(type_info, "", "YouCanLeaveYourHatOn+Data[]");
        }
        inline app::YouCanLeaveYourHatOn_Data__Array* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_Data__Array>(get_class());
        }
    } // namespace YouCanLeaveYourHatOn_Data__Array
} // namespace app::classes::types
