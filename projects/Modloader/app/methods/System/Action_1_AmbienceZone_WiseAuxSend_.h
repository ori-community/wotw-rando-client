#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_AmbienceZone_WiseAuxSend_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AmbienceZone_WiseAuxSend.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Action_1_AmbienceZone_WiseAuxSend_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::AmbienceZone_WiseAuxSend obj))
    IL2CPP_REGISTER_METHOD(0x01D24BB0, app::IAsyncResult*, BeginInvoke, (app::Action_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::AmbienceZone_WiseAuxSend obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_AmbienceZone_WiseAuxSend_
