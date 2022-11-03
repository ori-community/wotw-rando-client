#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GrolEntity {
    IL2CPP_REGISTER_METHOD(0x0108CDB0, app::String*, get_DialogActorName, (app::GrolEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0108CE30, app::String*, get_InteractionActorName, (app::GrolEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, (app::GrolEntity * this_ptr))
} // namespace app::classes::GrolEntity
