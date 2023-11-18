#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightCanvas_BindData.h>

namespace app::classes::LightCanvas_BindData {
    IL2CPP_REGISTER_METHOD(0x01143D80, void, ctor, (app::LightCanvas_BindData * this_ptr))
}
