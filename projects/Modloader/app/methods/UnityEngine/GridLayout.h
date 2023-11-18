#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GridLayout.h>

namespace app::classes::UnityEngine::GridLayout {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DoNothing, (app::GridLayout * this_ptr))
}
