#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TrackableId.h>
#include <Modloader/app/structs/TrackableId__Boxed.h>

namespace app::classes::UnityEngine::Experimental::XR::TrackableId {
    IL2CPP_REGISTER_METHOD(0x0024AF50, app::String*, ToString, app::TrackableId__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024B080, int32_t, GetHashCode, app::TrackableId__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0024B0A0, bool, Equals_1, app::TrackableId__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0024B180, bool, Equals_2, app::TrackableId__Boxed* this_ptr, app::TrackableId other)
    IL2CPP_REGISTER_METHOD(0x031767B0, void, cctor, )
} // namespace app::classes::UnityEngine::Experimental::XR::TrackableId
