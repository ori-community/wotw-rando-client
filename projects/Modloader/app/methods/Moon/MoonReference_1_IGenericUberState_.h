#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>

namespace app::classes::Moon::MoonReference_1_IGenericUberState_ {
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, app::MoonReference_1_IGenericUberState_* this_ptr, app::IGenericUberState* reference)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetVolatileValue, app::MoonReference_1_IGenericUberState_* this_ptr, app::IGenericUberState* new_value)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, app::MoonReference_1_IGenericUberState_* this_ptr, app::IGenericUberState* new_value)
    IL2CPP_REGISTER_METHOD(
        0x02720EB0,
        app::IGenericUberState*,
        SafeResolve,
        app::MoonReference_1_IGenericUberState_* this_ptr,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_IGenericUberState_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IGenericUberState*, Resolve, app::MoonReference_1_IGenericUberState_* this_ptr, app::IMoonResolverContext* context)
} // namespace app::classes::Moon::MoonReference_1_IGenericUberState_
