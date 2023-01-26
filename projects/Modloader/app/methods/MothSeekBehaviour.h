#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MothSeekBehaviour.h>

namespace app::classes::MothSeekBehaviour {
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::MothSeekBehaviour * this_ptr))
}
