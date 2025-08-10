#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Inertia.h>

namespace app::classes::RootMotion::FinalIK::Inertia {
    IL2CPP_REGISTER_METHOD(0x02A06700, void, ResetBodies, app::Inertia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A06770, void, OnModifyOffset, app::Inertia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::Inertia* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::Inertia
