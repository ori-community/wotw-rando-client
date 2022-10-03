#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_Moon_Wwise_SoundHost_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::SoundHost*, SafeResolve, (app::MoonReference_1_Moon_Wwise_SoundHost_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470FE28, MoonReference_1_Moon_Wwise_SoundHost__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, (app::MoonReference_1_Moon_Wwise_SoundHost_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743160, MoonReference_1_Moon_Wwise_SoundHost__get_HasAReference__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_Moon_Wwise_SoundHost_ * this_ptr, app::SoundHost** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047602D0, MoonReference_1_Moon_Wwise_SoundHost__TryResolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_Moon_Wwise_SoundHost_
