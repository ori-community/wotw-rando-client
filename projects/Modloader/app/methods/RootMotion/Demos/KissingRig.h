#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KissingRig.h>

namespace app::classes::RootMotion::Demos::KissingRig {
    IL2CPP_REGISTER_METHOD(0x02221BD0, void, Start, (app::KissingRig * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02221CC0, void, LateUpdate, (app::KissingRig * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02221D20, void, ctor, (app::KissingRig * this_ptr))
} // namespace app::classes::RootMotion::Demos::KissingRig
