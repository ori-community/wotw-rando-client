#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/MoonReference_1_ISerializedUberState_.h>

namespace app::classes::Moon::MoonReference_1_ISerializedUberState_ {
    IL2CPP_REGISTER_METHOD(
        0x02720EB0,
        app::ISerializedUberState*,
        SafeResolve,
        app::MoonReference_1_ISerializedUberState_* this_ptr,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_ISerializedUberState_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(
        0x02720AC0,
        app::ISerializedUberState*,
        Resolve,
        app::MoonReference_1_ISerializedUberState_* this_ptr,
        app::IMoonResolverContext* context
    )
} // namespace app::classes::Moon::MoonReference_1_ISerializedUberState_
