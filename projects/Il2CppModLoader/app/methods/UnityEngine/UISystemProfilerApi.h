#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UISystemProfilerApi {
    IL2CPP_REGISTER_METHOD(0x031A81E0, void, BeginSample, (app::UISystemProfilerApi_SampleType__Enum type))
    IL2CPP_REGISTER_METHOD(0x031A8230, void, EndSample, (app::UISystemProfilerApi_SampleType__Enum type))
    IL2CPP_REGISTER_METHOD(0x031A8280, void, AddMarker, (app::String * name, app::Object_1 * obj))
}
