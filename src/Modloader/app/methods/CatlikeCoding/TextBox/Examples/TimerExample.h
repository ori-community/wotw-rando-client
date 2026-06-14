#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimerExample.h>

namespace app::classes::CatlikeCoding::TextBox::Examples::TimerExample {
    IL2CPP_REGISTER_METHOD(0x0102E910, void, Start, app::TimerExample* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0102EAB0, void, Update, app::TimerExample* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TimerExample* this_ptr)
} // namespace app::classes::CatlikeCoding::TextBox::Examples::TimerExample
