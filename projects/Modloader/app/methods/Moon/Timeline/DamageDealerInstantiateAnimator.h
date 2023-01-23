#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageDealerInstantiateAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::DamageDealerInstantiateAnimator {
    IL2CPP_REGISTER_METHOD(0x00763C70, void, OnStartPlayback, (app::DamageDealerInstantiateAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00764690, void, ctor, (app::DamageDealerInstantiateAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::DamageDealerInstantiateAnimator
