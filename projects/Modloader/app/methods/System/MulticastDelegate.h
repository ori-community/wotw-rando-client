#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MulticastDelegate.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/Delegate__Array.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::MulticastDelegate {
    IL2CPP_REGISTER_METHOD(0x0173FA70, void, GetObjectData, (app::MulticastDelegate * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0226E0B0, bool, Equals, (app::MulticastDelegate * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0173F8B0, int32_t, GetHashCode, (app::MulticastDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226E2A0, app::MethodInfo_1*, GetMethodImpl, (app::MulticastDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226E430, app::Delegate__Array*, GetInvocationList, (app::MulticastDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226E5E0, app::Delegate*, CombineImpl, (app::MulticastDelegate * this_ptr, app::Delegate* follow))
    IL2CPP_REGISTER_METHOD(0x0226EA50, int32_t, LastIndexOf, (app::MulticastDelegate * this_ptr, app::Delegate__Array* haystack, app::Delegate__Array* needle))
    IL2CPP_REGISTER_METHOD(0x0226EBE0, app::Delegate*, RemoveImpl, (app::MulticastDelegate * this_ptr, app::Delegate* value))
} // namespace app::classes::System::MulticastDelegate
