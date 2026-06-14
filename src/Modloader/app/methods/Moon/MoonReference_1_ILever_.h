#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ILever.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_ILever_.h>

namespace app::classes::Moon::MoonReference_1_ILever_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_ILever_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ILever*, Resolve, app::MoonReference_1_ILever_* this_ptr, app::IMoonResolverContext* context)
} // namespace app::classes::Moon::MoonReference_1_ILever_
