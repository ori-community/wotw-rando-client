#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::XR::TrackableId {
    IL2CPP_REGISTER_METHOD(0x0024AF50, app::String *, ToString, (app::TrackableId__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024B080, int32_t, GetHashCode, (app::TrackableId__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0024B0A0, bool, Equals_1, (app::TrackableId__Boxed * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x0024B180, bool, Equals_2, (app::TrackableId__Boxed * this_ptr, app::TrackableId other))
    IL2CPP_REGISTER_METHOD(0x031767B0, void, cctor, ())
}
