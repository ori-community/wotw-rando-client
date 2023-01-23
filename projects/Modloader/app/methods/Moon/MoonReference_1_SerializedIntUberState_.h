#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/MoonReference_1_SerializedIntUberState_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>

namespace app::classes::Moon::MoonReference_1_SerializedIntUberState_ {
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::SerializedIntUberState*, Resolve, (app::MoonReference_1_SerializedIntUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0479A008, MoonReference_1_SerializedIntUberState__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_SerializedIntUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04728D00, MoonReference_1_SerializedIntUberState__CanResolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_SerializedIntUberState_
