#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ElapsedEventArgs.h>
#include <Modloader/app/structs/MainThreadDelegate.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::Network::Web::MainThreadDelegate {
    IL2CPP_REGISTER_METHOD(0x02E95C80, app::MainThreadDelegate*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x02E95F90, void, Create, app::MainThreadDelegate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E962B0, void, TimeToWork, app::MainThreadDelegate* this_ptr, app::Object* sender, app::ElapsedEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x02E96420, void, Update, app::MainThreadDelegate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02E96590, void, Add, app::MainThreadDelegate* this_ptr, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x02E966E0, void, Init, )
    IL2CPP_REGISTER_METHOD(0x02E96790, void, ctor, app::MainThreadDelegate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Moon::Network::Web::MainThreadDelegate
