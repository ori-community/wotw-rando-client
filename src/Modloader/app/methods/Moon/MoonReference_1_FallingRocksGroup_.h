#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FallingRocksGroup.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_FallingRocksGroup_.h>

namespace app::classes::Moon::MoonReference_1_FallingRocksGroup_ {
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::FallingRocksGroup*, Resolve, app::MoonReference_1_FallingRocksGroup_* this_ptr, app::IMoonResolverContext* context)
}
