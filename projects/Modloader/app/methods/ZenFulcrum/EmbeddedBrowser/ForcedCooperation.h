#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ForcedCooperation.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ForcedCooperation {
    IL2CPP_REGISTER_METHOD(0x01DDE2E0, void, Comply, (app::ForcedCooperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDE430, app::IEnumerator*, _Comply, (app::ForcedCooperation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ForcedCooperation * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ForcedCooperation
