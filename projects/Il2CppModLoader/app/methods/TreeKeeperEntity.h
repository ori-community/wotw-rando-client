#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TreeKeeperEntity {
    IL2CPP_REGISTER_METHOD(0x00B104C0, app::String*, get_DialogActorName, (app::TreeKeeperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B10540, app::String*, get_InteractionActorName, (app::TreeKeeperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B105C0, bool, get_CanEffectivelyStartInteraction, (app::TreeKeeperEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, (app::TreeKeeperEntity * this_ptr))
} // namespace app::classes::TreeKeeperEntity
