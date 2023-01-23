#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextMeshFloatSetter.h>

namespace app::classes::TextMeshFloatSetter {
    IL2CPP_REGISTER_METHOD(0x010E8220, void, Start, (app::TextMeshFloatSetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8310, void, FixedUpdate, (app::TextMeshFloatSetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TextMeshFloatSetter * this_ptr))
} // namespace app::classes::TextMeshFloatSetter
