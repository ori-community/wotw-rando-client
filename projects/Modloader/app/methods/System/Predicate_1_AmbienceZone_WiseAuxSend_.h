#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Predicate_1_AmbienceZone_WiseAuxSend_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::AmbienceZone_WiseAuxSend obj))
    IL2CPP_REGISTER_METHOD(0x0288BD50, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::AmbienceZone_WiseAuxSend obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_AmbienceZone_WiseAuxSend_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_AmbienceZone_WiseAuxSend_
