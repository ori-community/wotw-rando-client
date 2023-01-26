#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DepthPrecullModifier.h>

namespace app::classes::DepthPrecullModifier {
    IL2CPP_REGISTER_METHOD(0x00B83D00, void, SetProperties, (app::DepthPrecullModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::DepthPrecullModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83DC0, void, ctor, (app::DepthPrecullModifier * this_ptr))
} // namespace app::classes::DepthPrecullModifier
