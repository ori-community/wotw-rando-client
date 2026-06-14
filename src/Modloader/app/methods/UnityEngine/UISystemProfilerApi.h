#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UISystemProfilerApi_SampleType__Enum.h>

namespace app::classes::UnityEngine::UISystemProfilerApi {
    IL2CPP_REGISTER_METHOD(0x031A81E0, void, BeginSample, app::UISystemProfilerApi_SampleType__Enum type)
    IL2CPP_REGISTER_METHOD(0x031A8230, void, EndSample, app::UISystemProfilerApi_SampleType__Enum type)
    IL2CPP_REGISTER_METHOD(0x031A8280, void, AddMarker, app::String* name, app::Object_1* obj)
} // namespace app::classes::UnityEngine::UISystemProfilerApi
