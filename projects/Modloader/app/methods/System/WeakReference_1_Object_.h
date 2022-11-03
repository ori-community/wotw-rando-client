#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::WeakReference_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_1, (app::WeakReference_1_Object_ * this_ptr, app::Object* target))
    IL2CPP_REGISTER_METHOD(0x02259E20, void, ctor_2, (app::WeakReference_1_Object_ * this_ptr, app::Object* target, bool track_resurrection))
    IL2CPP_REGISTER_METHOD(0x02259E60, void, ctor_3, (app::WeakReference_1_Object_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x047871A8, WeakReference_1_Object___ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02259FC0, void, GetObjectData, (app::WeakReference_1_Object_ * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04776230, WeakReference_1_Object__GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225A0C0, bool, TryGetTarget, (app::WeakReference_1_Object_ * this_ptr, app::Object** target))
    IL2CPP_REGISTER_METHOD(0x0225A1B0, void, Finalize, (app::WeakReference_1_Object_ * this_ptr))
} // namespace app::classes::System::WeakReference_1_Object_
