#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KamikazeLizardEntity.h>

namespace app::classes::KamikazeLizardEntity {
    IL2CPP_REGISTER_METHOD(0x00E5BB00, void, ctor, (app::KamikazeLizardEntity * this_ptr))
}
