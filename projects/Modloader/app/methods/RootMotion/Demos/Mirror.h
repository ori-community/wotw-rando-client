#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Mirror.h>

namespace app::classes::RootMotion::Demos::Mirror {
    IL2CPP_REGISTER_METHOD(0x02227160, void, Start, (app::Mirror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022274A0, void, OnPostFBBIK, (app::Mirror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022277C0, void, OnDestroy, (app::Mirror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022279B0, void, ctor, (app::Mirror * this_ptr))
} // namespace app::classes::RootMotion::Demos::Mirror
