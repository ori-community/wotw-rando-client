#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Wwise_SoundHost_.h>
#include <Modloader/app/structs/SoundHost.h>

namespace app::classes::Moon::MoonReference_1_Moon_Wwise_SoundHost_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::SoundHost*, SafeResolve, app::MoonReference_1_Moon_Wwise_SoundHost_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, app::MoonReference_1_Moon_Wwise_SoundHost_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027214E0,
        bool,
        TryResolve,
        app::MoonReference_1_Moon_Wwise_SoundHost_* this_ptr,
        app::SoundHost** value,
        app::IMoonResolverContext* context
    )
} // namespace app::classes::Moon::MoonReference_1_Moon_Wwise_SoundHost_
