#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleController.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleController {
    IL2CPP_REGISTER_METHOD(0x0166A610, void, Start, app::SimpleController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166A8C0, void, GoToURLInput, app::SimpleController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SimpleController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166A900, void, _Start_b__2_0, app::SimpleController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0166A960, void, _Start_b__2_1, app::SimpleController* this_ptr, app::String* v)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::SimpleController
