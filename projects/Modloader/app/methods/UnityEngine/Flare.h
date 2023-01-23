#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Flare.h>

namespace app::classes::UnityEngine::Flare {
    IL2CPP_REGISTER_METHOD(0x02525FA0, void, ctor, (app::Flare * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02526070, void, Internal_Create, (app::Flare * self))
} // namespace app::classes::UnityEngine::Flare
