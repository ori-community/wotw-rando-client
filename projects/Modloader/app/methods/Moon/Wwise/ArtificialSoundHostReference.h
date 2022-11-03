#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Wwise::ArtificialSoundHostReference {
    IL2CPP_REGISTER_METHOD(0x001FE1E0, void, ctor, (app::ArtificialSoundHostReference__Boxed * this_ptr, app::ArtificialSoundHost* host))
    IL2CPP_REGISTER_METHOD(0x001FE200, bool, get_IsValid, (app::ArtificialSoundHostReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FE220, bool, Equals_1, (app::ArtificialSoundHostReference__Boxed * this_ptr, app::ArtificialSoundHostReference other))
    IL2CPP_REGISTER_METHOD(0x001FE290, bool, Equals_2, (app::ArtificialSoundHostReference__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001FE3A0, int32_t, GetHashCode, (app::ArtificialSoundHostReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FE3F0, void, Release, (app::ArtificialSoundHostReference__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FE420, app::WwiseEventSystem_SoundHandle, PlayAndReleaseWith, (app::ArtificialSoundHostReference__Boxed * this_ptr, app::Event_1* evt))
    IL2CPP_REGISTER_METHOD(0x001FE3F0, void, OnControllingEventComplete, (app::ArtificialSoundHostReference__Boxed * this_ptr, app::Object* in_cookie, app::AkCallbackType__Enum in_type, app::AkCallbackInfo* in_info))
    IL2CPP_REGISTER_METHODINFO(0x04707BF8, ArtificialSoundHostReference_OnControllingEventComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001FE450, app::ArtificialSoundHostReference, Place, (app::ArtificialSoundHostReference__Boxed * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x001FE4B0, app::ArtificialSoundHostReference, AttachTo, (app::ArtificialSoundHostReference__Boxed * this_ptr, app::Transform* transform))
} // namespace app::classes::Moon::Wwise::ArtificialSoundHostReference
