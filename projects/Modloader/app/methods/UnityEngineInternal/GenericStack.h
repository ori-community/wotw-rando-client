#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericStack.h>

namespace app::classes::UnityEngineInternal::GenericStack {
    IL2CPP_REGISTER_METHOD(0x02C7AA30, void, ctor, (app::GenericStack * this_ptr))
}
