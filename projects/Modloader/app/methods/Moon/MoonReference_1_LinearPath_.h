#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinearPath.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_LinearPath_.h>

namespace app::classes::Moon::MoonReference_1_LinearPath_ {
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::LinearPath*, Resolve, (app::MoonReference_1_LinearPath_ * this_ptr, app::IMoonResolverContext* context))
}
