#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_MessageProvider_.h>

namespace app::classes::Moon::MoonReference_1_MessageProvider_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_MessageProvider_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MessageProvider*, Resolve, app::MoonReference_1_MessageProvider_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, app::MoonReference_1_MessageProvider_* this_ptr, app::MessageProvider* new_value)
} // namespace app::classes::Moon::MoonReference_1_MessageProvider_
