#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WeakReference.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::WeakReference {
    IL2CPP_REGISTER_METHOD(0x0314DC40, void, AllocateHandle, (app::WeakReference * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::WeakReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314DC70, void, ctor_2, (app::WeakReference * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x0314DCA0, void, ctor_3, (app::WeakReference * this_ptr, app::Object* target, bool track_resurrection))
    IL2CPP_REGISTER_METHOD(0x0314DCD0, void, ctor_4, (app::WeakReference * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0314DE10, bool, get_IsAlive, (app::WeakReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314DE30, app::Object*, get_Target, (app::WeakReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314DE40, void, set_Target, (app::WeakReference * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_TrackResurrection, (app::WeakReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314DE50, void, Finalize, (app::WeakReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0314DED0, void, GetObjectData, (app::WeakReference * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::WeakReference
