#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlendFloat.h>
#include <Modloader/app/structs/Func_2_Single_Single_.h>

namespace app::classes::BlendFloat {
    IL2CPP_REGISTER_METHOD(0x00D2B030, void, ctor, (app::BlendFloat * this_ptr, app::Func_2_Single_Single_* ease))
}
