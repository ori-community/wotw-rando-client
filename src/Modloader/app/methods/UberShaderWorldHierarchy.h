#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderWorldHierarchy.h>

namespace app::classes::UberShaderWorldHierarchy {
    IL2CPP_REGISTER_METHOD(0x0128A0B0, void, Update, app::UberShaderWorldHierarchy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0128A590, void, ctor, app::UberShaderWorldHierarchy* this_ptr)
} // namespace app::classes::UberShaderWorldHierarchy
