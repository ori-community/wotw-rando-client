#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/MessageBox_c.h>

namespace app::classes::MessageBox___c {
    IL2CPP_REGISTER_METHOD(0x01592550, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MessageBox_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__89_0, app::MessageBox_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__89_1, app::MessageBox_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__89_2, app::MessageBox_c* this_ptr, app::MessageBox_HideAction__Enum _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__89_3, app::MessageBox_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__89_4, app::MessageBox_c* this_ptr, app::MessageBox_HideAction__Enum _p0_)
} // namespace app::classes::MessageBox___c
