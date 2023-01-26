#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_NPCEntity_.h>

namespace app::classes::Moon::MoonReference_1_NPCEntity_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::NPCEntity*, SafeResolve, (app::MoonReference_1_NPCEntity_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::NPCEntity*, Resolve, (app::MoonReference_1_NPCEntity_ * this_ptr, app::IMoonResolverContext* context))
} // namespace app::classes::Moon::MoonReference_1_NPCEntity_
