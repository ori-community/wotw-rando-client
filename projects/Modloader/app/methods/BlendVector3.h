#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BlendVector3.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>

namespace app::classes::BlendVector3 {
    IL2CPP_REGISTER_METHOD(0x00D2B3E0, void, ctor, (app::BlendVector3 * this_ptr, app::Func_2_Single_Single_* ease))
}
