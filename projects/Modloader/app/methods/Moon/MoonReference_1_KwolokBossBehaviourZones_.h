#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/KwolokBossBehaviourZones.h>
#include <Modloader/app/structs/MoonReference_1_KwolokBossBehaviourZones_.h>

namespace app::classes::Moon::MoonReference_1_KwolokBossBehaviourZones_ {
    IL2CPP_REGISTER_METHOD(
        0x02720EB0,
        app::KwolokBossBehaviourZones*,
        SafeResolve,
        app::MoonReference_1_KwolokBossBehaviourZones_* this_ptr,
        app::IMoonResolverContext* context
    )
}
