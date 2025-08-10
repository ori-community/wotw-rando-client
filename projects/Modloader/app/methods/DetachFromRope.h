#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DetachFromRope.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DetachFromRope {
    IL2CPP_REGISTER_METHOD(0x00B8DEF0, void, Perform, app::DetachFromRope* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::DetachFromRope* this_ptr)
} // namespace app::classes::DetachFromRope
