#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SendMouseEvents_HitInfo__Boxed.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::SendMouseEvents_HitInfo {
    IL2CPP_REGISTER_METHOD(0x00218890, void, SendMessage, (app::SendMouseEvents_HitInfo__Boxed * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0297CEB0, bool, op_Implicit, (app::SendMouseEvents_HitInfo exists))
    IL2CPP_REGISTER_METHOD(0x0297CF90, bool, Compare, (app::SendMouseEvents_HitInfo lhs, app::SendMouseEvents_HitInfo rhs))
} // namespace app::classes::UnityEngine::SendMouseEvents_HitInfo
