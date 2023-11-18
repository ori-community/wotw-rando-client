#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WeakPrefab.h>

namespace app::classes::WeakPrefab {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WeakPrefab * this_ptr))
}
