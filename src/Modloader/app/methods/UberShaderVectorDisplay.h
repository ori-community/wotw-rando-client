#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderVectorDisplay.h>

namespace app::classes::UberShaderVectorDisplay {
    IL2CPP_REGISTER_METHOD(0x0128A000, bool, get_DisplayX, app::UberShaderVectorDisplay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0128A020, bool, get_DisplayY, app::UberShaderVectorDisplay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0128A040, bool, get_DisplayZ, app::UberShaderVectorDisplay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0128A060, bool, get_DisplayW, app::UberShaderVectorDisplay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0128A080, void, ctor_1, app::UberShaderVectorDisplay* this_ptr, app::String* xy_name, app::String* zw_name)
    IL2CPP_REGISTER_METHOD(0x0128A090, void, ctor_2, app::UberShaderVectorDisplay* this_ptr, app::String* x, app::String* y, app::String* z, app::String* w)
} // namespace app::classes::UberShaderVectorDisplay
