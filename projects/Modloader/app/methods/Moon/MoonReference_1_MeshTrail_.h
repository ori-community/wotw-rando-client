#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MeshTrail.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_MeshTrail_.h>

namespace app::classes::Moon::MoonReference_1_MeshTrail_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MeshTrail*, SafeResolve, (app::MoonReference_1_MeshTrail_ * this_ptr, app::IMoonResolverContext* context))
}
