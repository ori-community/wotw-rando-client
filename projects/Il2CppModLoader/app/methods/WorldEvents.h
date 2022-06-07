#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WorldEvents {
    IL2CPP_REGISTER_METHOD(0x00581340, app::String *, GetNameFromID, (app::WorldEvents * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x005815A0, int32_t, GetIDFromName, (app::WorldEvents * this_ptr, app::String * event_name))
    IL2CPP_REGISTER_METHODINFO(0x04788200, WorldEvents_GetIDFromName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00581850, void, ctor, (app::WorldEvents * this_ptr))
}
