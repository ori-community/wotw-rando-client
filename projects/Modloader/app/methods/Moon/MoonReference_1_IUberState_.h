#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_IUberState_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/IUberState.h>

namespace app::classes::Moon::MoonReference_1_IUberState_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_IUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IUberState*, Resolve, (app::MoonReference_1_IUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::IUberState*, SafeResolve, (app::MoonReference_1_IUberState_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_IUberState_ * this_ptr, app::IUberState* reference))
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_IUberState_ * this_ptr, app::IUberState* new_value))
} // namespace app::classes::Moon::MoonReference_1_IUberState_
